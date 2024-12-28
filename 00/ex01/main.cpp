/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 19:16:01 by ialdidi           #+#    #+#             */
/*   Updated: 2024/12/28 14:40:42 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Phonebook.hpp"

int main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	while (!std::cin.eof())
	{
		phonebook.displayMenu();
		std::getline(std::cin , command);
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.displayContacts();
		else if (command == "EXIT")
			break ;
		else
			Utils::writeLine("Invalid option");
		Utils::writeNewLine();	
	}
	return (0);
}