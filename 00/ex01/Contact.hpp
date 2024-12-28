/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 19:19:55 by ialdidi           #+#    #+#             */
/*   Updated: 2024/12/27 23:22:52 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "Utils.hpp"

typedef bool func(std::string);

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string phoneNumber;
		std::string	nickname;
		std::string darkSecret;
	public:
		void setMember(std::string, func Contact::*fn);
		bool setFirstName(std::string);
		bool setLastName(std::string);
		bool setPhoneNumber(std::string);
		bool setNickname(std::string);
		bool setDarkSecret(std::string);
		void showContact();
		void setContact(Contact);
		std::string	getFirstName(bool = false);
		std::string	getLastName(bool = false);
		std::string	getPhoneNumber();
		std::string	getNickname(bool = false);
		std::string	getDarkSecret();
};

#endif