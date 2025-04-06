#include "Base.hpp"
#include <iostream>

int	main(){
	Base* first = generate();
	Base* second = generate();

	std::cout << "*first = ";
	identify(first);
	std::cout << "*second = ";
	identify(second);
	
	std::cout << "&first = ";
	identify(*first);
	std::cout << "&second = ";
	identify(*second);
	
	delete first;
	delete second;
}