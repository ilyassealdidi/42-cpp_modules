/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 20:01:52 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/08 20:01:53 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif