/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 19:29:45 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/08 20:53:08 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) {
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
	{
		std::string str = av[i];
		for (size_t j = 0; j < str.size(); j++)
			std::cout << (char)std::toupper(str.at(j));
	}
	std::cout << std::endl;
	return 0;
}
