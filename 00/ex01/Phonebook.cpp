/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 19:20:55 by ialdidi           #+#    #+#             */
/*   Updated: 2024/12/28 14:55:17 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


PhoneBook::PhoneBook() {
	index = 0;
	std::cout << "*** Welcome to your PhoneBook ***" << std::endl << std::endl;
}

PhoneBook::~PhoneBook() {
	std::cout << std::endl << "*** Good Bye 👋 ***" << std::endl;
}

void PhoneBook::displayMenu() {
	Utils::writeLine("| Menu :");
	Utils::writeLine("|");
	Utils::writeLine("| · ADD");
	Utils::writeLine("| · SEARCH");
	Utils::writeLine("| · EXIT");
	Utils::writeLine("|");
	Utils::writeNewLine();
	Utils::write("Choose one option : ");
}

void PhoneBook::addContact() {
	Contact contact;

	contact.setMember("first name", &Contact::setFirstName);
	contact.setMember("last name", &Contact::setLastName);
	contact.setMember("phone number", &Contact::setPhoneNumber);
	contact.setMember("nickname", &Contact::setNickname);
	contact.setMember("dark secret", &Contact::setDarkSecret);
	if (index != 8)
		contacts[index++].setContact(contact);
	else
		contacts[0].setContact(contact);
	Utils::writeLine(GREEN "\n\n\t\tThe contact has been succesfully added\n" RESET);
}

void displayField(std::string field)
{
	if (field.length() > 10)
		Utils::write(field.substr(0, 9) + ".");
	Utils::write(field);
}

void PhoneBook::displayContacts() {
	Contact contact;
	int num;

	Utils::writeNewLine();
	if (index == 0)
	{
		Utils::writeLine(YELLOW "\t\tNo contacts to show :(" RESET);
		return ;
	}
	for (int i = 0; i < index; i++)
	{
		std::cout << GREEN "\t\t" << (i + 1) << ") " RESET;
		std::cout << std::setw(10) << contacts[i].getFirstName(true) << "|";
		std::cout << std::setw(10) << contacts[i].getLastName(true) << "|";
		std::cout << std::setw(10) << contacts[i].getNickname(true) << std::endl;
	}
	Utils::writeNewLine();
	while (true)
	{
		Utils::write("Choose a contact : ");
		std::string index;
		std::getline(std::cin, index);
		if (std::cin.eof())
			return ;
		num = index[0] - '1';
		if (index.length() != 1 || (isdigit(index[0]) == 0)
			|| !(num >= 0 && num <= 7))
		{
			Utils::writeLine(RED "\t\tInvalid index" RESET);
			continue;
		}
		contacts[num].showContact();
		break ;
	}
}