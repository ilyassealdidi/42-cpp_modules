/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 20:13:15 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/08 20:13:16 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
	private :
		std::string type;
	public :
		Weapon();
		Weapon(std::string type);
		void setType(std::string type);
		const std::string &getType();
};

#endif