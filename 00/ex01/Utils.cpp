/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 21:52:41 by ialdidi           #+#    #+#             */
/*   Updated: 2024/12/28 14:39:47 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

void Utils::write(std::string str)
{
	if (std::cin.eof())
		return ;
	std::cout << str;
}

void Utils::writeNewLine()
{
	if (std::cin.eof())
		return ;
	std::cout << std::endl;
}

void Utils::writeLine(std::string str)
{
	write(str);
	writeNewLine();
}
