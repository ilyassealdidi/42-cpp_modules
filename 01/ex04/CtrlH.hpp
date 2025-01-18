/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NoSed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 20:24:51 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/18 15:22:39 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CTRLH_HPP
#define CTRLH_HPP

#include <fstream>
#include <iostream>
#include <string.h>

class CtrlH {
	public :
		static void replace(std::string, std::string, std::string);
};

#endif