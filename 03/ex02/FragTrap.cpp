/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 19:50:46 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/04 20:04:42 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap " << name << " is created" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->name << " is destroyed" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << name << " is asking for a high five" << std::endl;
}
