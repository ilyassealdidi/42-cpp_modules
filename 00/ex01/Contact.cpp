/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 19:58:59 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/08 21:38:49 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool isValidName(std::string name) {
    if (name.empty()) {
        return false;
    }

    if (!std::isalpha(name[0]) || !std::isalpha(name[name.length() - 1])) {
        return false;
    }

    bool lastWasSpace = false;

    for (char c : name) {
        if (std::isalpha(c) == 1) {
            lastWasSpace = false;
            continue;
        }
        else if (c == ' ') {
            if (lastWasSpace) {
                return false;
            }
            lastWasSpace = true;
            continue;
        }

        return false;
    }

    return true;
}

bool isPrintableString(std::string str) {
	for (int i = 0; str[i] != 0; i++) {
		if (std::isprint(str[i]) == 0)
			return false;
	}
	return true;
}

bool Contact::setFirstName(std::string firstName) {
	if (!isValidName(lastName)) {
		return false;	
	}

	this->lastName = lastName;
	return true;
}

bool Contact::setLastName(std::string lastName) {
	if (!isValidName(lastName)) {
		return false;	
	}

	this->lastName = lastName;
	return true;
}

bool Contact::setPhoneNumber(std::string phoneNumber) {
	if (phoneNumber.length() != 10) {
        return false;
    }

    if (phoneNumber[0] != '0') {
        return false;
    }
	
    for (char c : phoneNumber) {
        if (!std::isdigit(c)) {
            return false;
        }
    }

	this->phoneNumber = phoneNumber;
	return true;
}

bool Contact::setNickname(std::string nickname) {
	if (nickname.empty() || !isPrintableString(nickname)) {	
		return false;
	}

	this->nickname = nickname;
	return true;
}

bool Contact::setDarkSecret(std::string darkSecret) {
	if (darkSecret.empty() || !isPrintableString(nickname)) {	
		return false;
	}

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

void Contact::setMember(std::string field, func Contact::*fn)
{
	std::string str;

	while (true)
	{
		Utils::write("\t\tEnter the " + field + ": ");
		std::getline(std::cin , str);
		if (std::cin.eof())
			return ;
		if ((this->*fn)(str))
			break ;
		Utils::write(RED "\t\t\t Invalid " + field + ", Try again!" RESET);
		Utils::writeNewLine();
	}
}
