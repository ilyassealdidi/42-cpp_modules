#include "ScalarConverter.hpp"

int main(int argc, std::string argv[])
{
    if (argc != 2)
    {
        std::cerr << "Error: Invalid number of arguments." << std::endl;
        std::cout << "Usage: " << argv[0] << " <literal>" << std::endl;
        return 1;
    }

    ScalarConverter::convert(argv[1]);
    return 0;
}