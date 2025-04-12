#include "ScalarConverter.hpp"

#pragma region Constructors and Destructor

ScalarConverter::ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
    (void)other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
    (void)other;
    return *this;
}

ScalarConverter::~ScalarConverter() {
}

#pragma endregion

#pragma region Helper Functions

// Printing functions

void printChar(char c) {
    std::cout << "char: ";
    if (std::isprint(c))
        std::cout << "'" << c << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
}

void printInt(int num) {
    std::cout << "int: " << num << std::endl;
}

void printFloat(float num) {
    std::cout << "float: " << num;
    if (num == static_cast<int>(num))
        std::cout << ".0";
    std::cout << "f" << std::endl;
}

void printDouble(double num) {
    std::cout << "double: " << num;
    if (num == static_cast<int>(num))
        std::cout << ".0";
    std::cout << std::endl;
}

// Data type check functions

bool isChar(const std::string& input) {
    if (input.length() == 1 && !isdigit(input[0]) && isprint(input[0])) { 
        return true;
    }
    return false;
}

bool isFloat(const std::string &input) {
    char *ptr;

    if (input == "nanf" || input == "-inff" || input == "+inff")
        return true;
    if (input[0] != '-' && input[0] != '+' && input[0] != '.' && !isdigit(input[0]))
        return false;
    std::strtof(input.c_str(), &ptr);
    return (*ptr == 'f' && *(ptr + 1) == '\0');
}

bool isDouble(const std::string &input) {
    char *ptr;
    if (input == "nan" || input == "+inf" || input == "-inf")
        return true;

    strtod(input.c_str(), &ptr);
    return (*ptr == '\0');
}

bool isInt(const std::string& input) {
    size_t i = 0;

    if (input[i] == '-' || input[i] == '+') {
        i++;
    }
    if (std::isdigit(input[i]) && input.find_first_not_of("0123456789", i) == std::string::npos) {
        return true;
    }
    return false;
}

// Parsing functions

void parseChar(std::string& input) {
    printChar(input[0]);
    printInt(static_cast<int>(input[0]));
    printFloat(static_cast<float>(input[0]));
    printDouble(static_cast<double>(input[0]));
}

void parseInt(std::string &input) {
    long num = strtol(input.c_str(), NULL, 10);
    if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min()) {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: impossible\n";
        std::cout << "double: impossible\n";
        return;
    }

    int i = static_cast<int>(num);
    printChar(static_cast<char>(i));
    printInt(i);
    printFloat(static_cast<float>(i));
    printDouble(static_cast<double>(i));
}

void parseFloat(std::string &input) {
    float num = 0.0f;

    if (input == "nanf") {
        num = std::numeric_limits<float>::quiet_NaN();
    }
    else if (input == "+inff") {
        num = std::numeric_limits<float>::infinity();
    }
    else if (input == "-inff") {
        num = -std::numeric_limits<float>::infinity();
    }
    else {
        num = std::strtof(input.c_str(), NULL);
    }

    if (std::isnan(num) || std::isinf(num))
        std::cout << "char: impossible\n";
    else
        printChar(static_cast<char>(num));

    if (std::isnan(num) || std::isinf(num) || num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min())
        std::cout << "int: impossible\n";
    else
        printInt(static_cast<int>(num));

    printFloat(num);
    printDouble(static_cast<double>(num));
}

void parseDouble(std::string &input) {
    double num = 0.0;

    if (input == "nan") {
        num = std::numeric_limits<double>::quiet_NaN();
    }
    else if (input == "+inf") {
        num = std::numeric_limits<double>::infinity();
    }
    else if (input == "-inf") {
        num = -std::numeric_limits<double>::infinity();
    }
    else {
        num = std::strtod(input.c_str(), NULL);
    }

    if (std::isnan(num) || std::isinf(num))
        std::cout << "char: impossible\n";
    else
        printChar(static_cast<char>(num));

    if (std::isnan(num) || std::isinf(num) || num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min())
        std::cout << "int: impossible\n";
    else
        printInt(static_cast<int>(num));

    printFloat(static_cast<float>(num));
    printDouble(num);
}


#pragma endregion

#pragma region Member Functions

void ScalarConverter::convert(std::string input) {
    if (isInt(input)) {
        parseInt(input);
    } else if (isDouble(input)) {
        parseDouble(input);
    } else if (isFloat(input)) {
        parseFloat(input);
    } else if (isChar(input)) {
        parseChar(input);
    } else {
        std::cout << "Unknown type" << std::endl;
    }
}

#pragma endregion