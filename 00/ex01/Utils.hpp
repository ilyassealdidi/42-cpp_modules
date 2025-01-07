/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 21:52:56 by ialdidi           #+#    #+#             */
/*   Updated: 2024/12/27 22:53:24 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <string>
# include <sstream>

# define RED "\033[0;91m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[5;93m"
# define RESET "\033[0m"

class Utils {
	public:
		static void write(std::string);
		static void writeLine(std::string);
		static void writeNewLine();
		static std::string to_string(int);
};

#endif