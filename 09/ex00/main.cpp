#include "BitcoinExchange.hpp"
#include <iostream>
#include <cstdlib>

int main(int ac, char **argv) {
    std::map<std::string, std::string> data;
    // data["2021-01-02"] = "43.43";
    // data["2021-01-03"] = "44.44";
    // data["2021-01-04"] = "45.45";
    // data["2021-01-05"] = "46.46";
    // data["2021-01-06"] = "47.47";
    data["2021-01-07"] = "48.48";
    data["2021-01-08"] = "49.49";
    // data["2021-01-09"] = "50.50";

    std::map<std::string, std::string>::iterator itr = data.upper_bound("2021-01-07");
    if (itr == data.begin()) {
        std::cout << "1" << std::endl;
    }

    if (itr == data.end()) {
        std::cout << "2" << std::endl;
    }
    
    // std::cout << data.begin()->first << std::endl;
    // std::cout << itr->first << std::endl;
    //     // --itr;
    //     std::cout << "Closest date: " << itr->first << ", Price: " << itr->second << std::endl;
    // } else {
    //     std::cout << "No previous date found." << std::endl;
    // }
    // if (ac != 2) {
    //     std::cerr << "Invalid usage!" << std::endl;
    //     std::cerr << "Usage: ./btc <filename>" << std::endl;
    //     return EXIT_FAILURE;
    // }

    // try {
    //     BitcoinExchange btc;
    //     btc.printData();
    //     // btc.execute(argv[1]);
    // } catch (const std::exception &e) {
    //     std::cerr << e.what() << std::endl;
    // }

    return EXIT_SUCCESS;
}