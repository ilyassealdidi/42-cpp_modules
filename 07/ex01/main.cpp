#include "iter.hpp"

void iterate(int &num){
	num = 8;
}

void iterate(char &c){
	c = toupper(c);
}

int	main(){
	char tab[] = "Ilyasse Aldidi";

	iter(tab, 13, iterate);
	std::cout << tab << std::endl;

	int tab2[] = {56,89,69,31,0,-1,56};
	iter(tab2, 7, iterate);

    for (int i = 0; i < 7; i++)
		std::cout << tab2[i] << " ";
	std::cout << std::endl;
}