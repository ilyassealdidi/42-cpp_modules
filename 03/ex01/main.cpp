/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 22:30:35 by ialdidi           #+#    #+#             */
/*   Updated: 2025/02/11 20:26:42 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("ilyasse");

	scav.guardGate();
	scav.attack("enemy");
	scav.takeDamage(5);
	scav.beRepaired(5);

	return 0;
}