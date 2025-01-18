/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 08:30:58 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/18 15:22:26 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CtrlH.hpp"



int main(int ac, char *av[]) {
	if (ac != 4) {
		std::cout << "Invalid input !" << std::endl;
		return 1;
	}
	CtrlH::replace(av[1], av[2], av[3]);
	return 0;
}