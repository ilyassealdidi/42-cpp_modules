/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NoSed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 20:24:51 by ialdidi           #+#    #+#             */
/*   Updated: 2024/12/21 10:25:37 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOSED_HPP
#define NOSED_HPP

#include <fstream>
#include <string.h>
#include <iostream>

class NoSed {
	public :
		static void replace(std::string, std::string, std::string);
};

#endif