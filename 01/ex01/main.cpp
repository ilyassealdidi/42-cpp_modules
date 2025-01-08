/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 20:05:30 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/08 20:11:04 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    int num = 5;
    Zombie* zombies = zombieHorde(num, "Zombie");
    for (int i = 0; i < num; i++)
        zombies[i].announce();
    delete [] zombies;
    return 0;
}
