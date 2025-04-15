#include "easyfind.hpp"
#include <list>

int main() {
    // Test 1
    std::cout << "` Searching in an empty container" << std::endl;
    try {
        std::vector<int> empty;
        easyfind(empty, 1);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    // Test 2
    std::cout << "` Searching for a number not in the container" << std::endl;
    try {
        std::list<int> table;
        table.push_back(1);
        table.push_back(8);
        table.push_back(3);
        easyfind(table, 5);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    // Test 3
    std::cout << "` Test for ordinary mortals" << std::endl;
    try {
        std::vector<int> table;
        table.push_back(1);
        table.push_back(8);
        table.push_back(3);
        easyfind(table, 8);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    return 0;
}