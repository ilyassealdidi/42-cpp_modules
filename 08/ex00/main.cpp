#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main ()
{
    std::vector<int> table;
    try {
        table.push_back(1);
        table.push_back(8);
        table.push_back(3);
        easyfind(table, 5);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::list<int> list;
    try {
        list.push_back(1);
        list.push_back(8);
        list.push_back(3);
        easyfind(list, -1);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}