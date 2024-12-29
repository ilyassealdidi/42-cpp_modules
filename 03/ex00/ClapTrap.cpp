/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 12:52:27 by ialdidi           #+#    #+#             */
/*   Updated: 2024/12/29 22:24:53 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap " << name << " has no energy points" << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " is already dead" << std::endl;
		return ;
	}
	while (amount > 0 && hitPoints > 0)
	{
		hitPoints--;
		amount--;
	}
	std::cout << "ClapTrap " << name << " takes " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hitPoints == 10)
	{
		std::cout << "ClapTrap " << name << " is already full life" << std::endl;
		return ;
	}
	while (amount > 0 && hitPoints < 10)
		hitPoints++;
	std::cout << "ClapTrap " << name << " is repaired by " << amount << std::endl;
}