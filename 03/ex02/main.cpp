/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 22:30:35 by ialdidi           #+#    #+#             */
/*   Updated: 2025/02/11 20:40:50 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap fragTrap("ialdidi");

	fragTrap.attack("enemy");
    fragTrap.takeDamage(10);
    fragTrap.beRepaired(10);
    fragTrap.highFivesGuys();

	return 0;
}