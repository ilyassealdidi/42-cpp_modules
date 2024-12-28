/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 08:30:58 by ialdidi           #+#    #+#             */
/*   Updated: 2024/12/21 10:24:58 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "NoSed.hpp"

int main(int ac, char *av[]) {
	if (ac != 4) {
		std::cout << "Invalid input !" << std::endl;
		return 1;
	}
	NoSed::replace(av[1], av[2], av[3]);
	return 0;
}