#ifndef ScalarConverter_HPP
# define ScalarConverter_HPP

# include <iostream>
#include <sstream>
#include <iomanip> 

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& other);
    public:
        ~ScalarConverter();
        static	void convert(std::string input);
};

#endif