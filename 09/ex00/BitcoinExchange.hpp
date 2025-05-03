#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <stdlib.h> // Check if there is any alternative
#include <map>
#include <ctime>

#define USAGE_ERROR "Error: Invalid number of arguments\nUsage: ./bitcoin <filename>"

typedef std::map<std::string, std::string> PriceMap;

class BitcoinExchange
{
    private:
        PriceMap historicalData;

        bool isFutureDate(const std::string& date) const;
        bool isNumeric(const std::string &str) const;
        bool isValidDate(const std::string &str) const;

        void calculatePrice(const std::string& date, double amount) const;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& obj);
        BitcoinExchange& operator=(const BitcoinExchange& obj);
        ~BitcoinExchange();

        void displayHistoricalPrices(std::string &filename);
};

#endif