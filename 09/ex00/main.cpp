#include <iostream>
#include "BitcoinExchange.hpp"

int main(int ac, char **argv) {
    if (ac != 2) {
        std::cerr << "Invalid usage!" << std::endl;
        std::cerr << "Usage: ./btc <filename>" << std::endl;
        return 1;
    }

    try {
        BitcoinExchange btc;
        // btc.execute(argv[1]);
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}