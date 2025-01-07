/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 19:58:59 by ialdidi           #+#    #+#             */
/*   Updated: 2024/12/28 14:41:20 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool isAlpha(std::string str) {
	for (int i = 0; str[i] != 0; i++) {
		if (isalpha(str[i]) == 0)
			return false;
	}
	return true;
}

bool isNumber(std::string str) {
	for (int i = 0; str[i] != 0; i++) {
		if (isdigit(str[i]) == 0)
			return false;
	}
	return true;
}

bool isPrintable(std::string str) {
	for (int i = 0; str[i] != 0; i++) {
		if (isprint(str[i]) == 0)
			return false;
	}
	return true;
}

bool Contact::setFirstName(std::string firstName) {
	if (firstName.empty() || !isAlpha(firstName))
		return false;
	this->firstName = firstName;
	return true;
}

bool Contact::setLastName(std::string lastName) {
	if (lastName.empty() || !isAlpha(lastName))
		return false;
	this->lastName = lastName;
	return true;
}

bool Contact::setPhoneNumber(std::string phoneNumber) {
	if (phoneNumber.empty() || !isNumber(phoneNumber))
		return false;
	this->phoneNumber = phoneNumber;
	return true;
}

bool Contact::setNickname(std::string nickname) {
	if (nickname.empty() || !isPrintable(nickname))
		return false;
	this->nickname = nickname;
	return true;
}

bool Contact::setDarkSecret(std::string darkSecret) {
	if (darkSecret.empty() || !isPrintable(nickname))
		return false;
	this->darkSecret = darkSecret;
	return true;
}

void Contact::showContact() {
	Utils::writeNewLine();
	Utils::writeLine("\t\tFirst name: " GREEN + firstName + RESET);
	Utils::writeLine("\t\tLast Name: " GREEN + lastName + RESET);
	Utils::writeLine("\t\tNickname: " GREEN + nickname + RESET);
	Utils::writeLine("\t\tPhone Number: " GREEN + phoneNumber + RESET);
	Utils::writeLine("\t\tDark secret: " GREEN + darkSecret + RESET);
}

void Contact::setContact(Contact contact)
{
	this->firstName = contact.getFirstName();
	this->lastName = contact.getLastName();
	this->phoneNumber = contact.getPhoneNumber();
	this->nickname = contact.getNickname();
	this->darkSecret = contact.getDarkSecret();
}

std::string Contact::getFirstName(bool shortVersion) {
	if (shortVersion && this->firstName.length() > 10)
		return this->firstName.substr(0, 9) + ".";
	return (this->firstName);
}

std::string Contact::getLastName(bool shortVersion) {
	if (shortVersion && this->lastName.length() > 10)
		return this->lastName.substr(0, 9) + ".";
	return (this->lastName);
}

std::string Contact::getPhoneNumber() {
	return (this->phoneNumber);
}

std::string Contact::getNickname(bool shortVersion) {
	if (shortVersion && this->nickname.length() > 10)
		return this->nickname.substr(0, 9) + ".";
	return (this->nickname);
}

std::string Contact::getDarkSecret() {
	return (this->darkSecret);
}
#include <cstdlib>
void Contact::setMember(std::string field, func Contact::*fn)
{
	std::string str;

	while (true)
	{
		Utils::write("\n\t\tEnter the " + field + ": ");
		std::getline(std::cin , str);
		if (std::cin.eof())
			return ;
		Utils::write("\033[1A\033[" + Utils::to_string(field.length() + str.length() + "\t\t".length()) + "G");
		if ((this->*fn)(str))
		{
			Utils::write("\033[3m✅" RESET);
			break ;
		}
		Utils::write(RED "\033[3m❌ Invalid " + field +", Try again!" RESET);
	}
}
