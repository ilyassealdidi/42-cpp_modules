#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <stdlib.h> // Try to replace this with <cstdlib> if possible
#include <map>
#include <ctime>

typedef std::map<std::string, std::string> PriceMap;

class BitcoinExchange
{
    private:
        PriceMap historicalData;

        bool isFutureDate(const std::string& date) const;
        bool isNumeric(const std::string &str) const;
        bool isDate(const std::string &str) const;

        std::string getClosestDate(const std::string& date) const;

        void calculatePrice(const std::string& date, double amount) const;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& obj);
        BitcoinExchange& operator=(const BitcoinExchange& obj);
        ~BitcoinExchange();

        void getHitoricalPrices(std::string &filename);
        
        void printData(); //! To be removed in the final version
};

#endif