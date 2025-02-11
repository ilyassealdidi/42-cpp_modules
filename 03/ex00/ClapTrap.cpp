/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 12:52:27 by ialdidi           #+#    #+#             */
/*   Updated: 2025/02/11 20:38:41 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor called" << std::endl;
	name = "anonymous";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap parameterized constructor called" << std::endl;
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& obj) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj) {
	std::cout << "ClapTrap assignation operator called" << std::endl;
	if (this != &obj) {	
		name = obj.name;
		hitPoints = obj.hitPoints;
		energyPoints = obj.energyPoints;
		attackDamage = obj.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->hitPoints == 0) {
		std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
	}
	else if (this->energyPoints == 0) {
		std::cout << "ClapTrap " << this->name << " has no energy points" << std::endl;
	}
	else {
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints == 0) {
		std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
		return ;
	}
	if (amount >= this->hitPoints)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " takes " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hitPoints == 0) {
		std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
	}
	else if (this->energyPoints == 0) {
		std::cout << "ClapTrap " << this->name << " has no energy points" << std::endl;
	}
	else {
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " is repaired by " << amount << std::endl;
	}
}