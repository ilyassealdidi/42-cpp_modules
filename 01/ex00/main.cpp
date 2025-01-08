/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 20:01:38 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/08 20:01:40 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie* z = newZombie("Zombie1");
    z->announce();
    randomChump("Zombie2");
    delete z;
    return 0;
}
