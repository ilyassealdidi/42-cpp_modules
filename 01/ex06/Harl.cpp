/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:10:33 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/10 15:54:52 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int indexOfString(std::string str, std::string arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (str == arr[i])
			return (i);
	}
	return (-1);
}

void Harl::complain (std::string level)
{
    std::string levels[4] = {"DEBUG" , "INFO", "WARNING", "ERROR"};
    int level_id = indexOfString(level, levels, 4);

    switch (level_id)
    {
        case 1:
            debug();
            info();
            warning();
            error();
            break ;
        case 2:
            info();
            warning();
            error();
            break ;
        case 3 :
            warning();
            error();
            break ;
        case 4 :
            error();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            break;
    }
}