/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 20:05:30 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/08 21:46:20 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    int num = 5;
    Zombie* zombies = zombieHorde(num, "Zombie");
	if (zombies != nullptr)
	{
		for (int i = 0; i < num; i++)
			zombies[i].announce();
		delete [] zombies;
	}
    return 0;
}
