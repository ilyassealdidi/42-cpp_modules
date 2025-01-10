/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:10:44 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/10 15:50:45 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac , char **av) {
	Harl harl;

	if (ac != 2) {
		std::cerr << "Usage: ./ex06 [DEBUG|INFO|WARNING|ERROR]" << std::endl;
	}

	harl.complain(av[1]);
	return 0;
}