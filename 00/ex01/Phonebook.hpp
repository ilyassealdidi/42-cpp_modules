/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 19:16:57 by ialdidi           #+#    #+#             */
/*   Updated: 2024/12/24 19:18:06 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
#include <cstdlib>
# include "Utils.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact();
		void	displayContacts();
		void	displayMenu();
		// int		getIndex();
		// void	incrementIndex();
	private:
		Contact	contacts[8];
		int		index;
};

#endif