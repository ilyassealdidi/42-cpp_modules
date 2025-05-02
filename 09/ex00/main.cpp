#include "BitcoinExchange.hpp"
#include <iostream>
#include <cstdlib>

int main(int ac, char **argv) {
    try {
        if (ac != 2) {
            throw std::runtime_error("Invalid number of arguments\nUsage: ./bitcoin <filename>");
        }
        BitcoinExchange btc;
        std::string filename = argv[1];
        btc.getHitoricalPrices(filename);
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return EXIT_SUCCESS;
}