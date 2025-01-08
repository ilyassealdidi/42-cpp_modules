/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NoSed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 20:24:51 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/08 20:14:52 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOSED_HPP
#define NOSED_HPP

#include <fstream>
#include <iostream>
#include <string.h>

class NoSed {
	public :
		static void replace(std::string, std::string, std::string);
};

#endif