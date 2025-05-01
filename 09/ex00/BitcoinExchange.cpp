#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
    std::ifstream file("data.csv");
    if (!file.is_open()) {
        throw std::runtime_error("Error: could not open data.csv");
    }
    PriceMap data;
    std::string date;
    std::string price;
    std::string line;

    std::getline(file, line);
    while (std::getline(file, line)) {
        size_t pos = line.find(',');
        if (pos != std::string::npos) {
            date = line.substr(0, pos);
            price = line.substr(pos + 1);
            data[date] = price;
        }
    }
    file.close();
    // if (historicalData.empty()) {
    //     throw std::runtime_error("Error: the `data.csv` file is empty");
    // }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj) {
    *this = obj;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj) {
    if (this != &obj) {
        this->historicalData = obj.historicalData;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange() {
}

void BitcoinExchange::getHitoricalPrices(std::string &filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Error: could not open " + filename);
    }
    std::string date;
    double price;
    std::string line;

    std::getline(file, line);
    while (std::getline(file, line)) {
        size_t pos = line.find('|');
        try {
            if (pos == std::string::npos || line.length() < 14
            || line[pos - 1] != ' '|| line[pos + 1] != ' ') {
                throw std::runtime_error("Error: bad input => " + line);
            }

            date = line.substr(0, pos - 1);
            if (!isDate(date)
            || line.find_first_not_of("0123456789.-", pos + 1) != std::string::npos
            || !isNumeric(line.substr(pos + 1))) {
                throw std::runtime_error("Error: bad input => " + line);
            }

            price = strtod(line.substr(pos + 1).c_str(), NULL);
            if (price < 0) {
                throw std::runtime_error("Error: not a positive number");
            } else if (price > 1000) {
                throw std::runtime_error("Error: too large a number");
            } else {

            }

        } catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
    file.close();
}

bool BitcoinExchange::isFutureDate(const std::string& date) const {

	time_t now;
	struct tm * timeinfo;
	char buffer [80];

	time(&now);
	timeinfo = localtime(&now);

	strftime(buffer,80,"%Y-%m-%d",timeinfo);
    return date > std::string(buffer);
}

bool BitcoinExchange::isNumeric(const std::string& str) const {
    char *ptr;
    double value = strtod(str.c_str(), &ptr);
	if (*ptr) {
        return false;
	}
    return true;
}

bool BitcoinExchange::isDate(const std::string& date) const {
    if (date.length() < 14 || date[4] != '-' || date[7] != '-') {
        return false;
    }
    
    std::string yearStr  = date.substr(0, 4);
    std::string monthStr = date.substr(5, 2);
    std::string dayStr   = date.substr(8, 2);
    
    for (size_t i = 0; i < 4; ++i) {
        if (!isdigit(yearStr[i])) return false;
    }
    for (size_t i = 0; i < 2; ++i) {
        if (!isdigit(monthStr[i]) || !isdigit(dayStr[i])) return false;
    }
    
    int year  = atoi(yearStr.c_str());
    int month = atoi(monthStr.c_str());
    int day   = atoi(dayStr.c_str());

    if (year < 2009) return false;
    if (month < 1 || month > 12) return false;
    if (day < 1) return false;

    if (isFutureDate(date)) {
        return false;
    }

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Adjust February for leap years
    if (month == 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))) {
        daysInMonth[1] = 29;
    }
    
    return day <= daysInMonth[month - 1];
}

std::string BitcoinExchange::getClosestDate(const std::string& date) const {
	std::map<std::string, std::string>::const_iterator itr = historicalData.lower_bound(date);
	// how to check the closest date?;
}

void BitcoinExchange::calculatePrice(const std::string& date, double amount) const {
	PriceMap::const_iterator itr = historicalData.find(date);
	if (itr == historicalData.end()) {
        itr = historicalData.lower_bound(date);
    }
    double	price = strtod((itr->second).c_str(), NULL);
	std::cout << date << " => " << amount << " = " << price * amount << std::endl;
}
