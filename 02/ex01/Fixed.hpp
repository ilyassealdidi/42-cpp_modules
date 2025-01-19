/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 22:03:15 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/18 18:55:01 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef FIXED_HPP
// # define FIXED_HPP

class Fixed
{
	private:
		int	number;
		static const int FractionalPartBits;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &other);
		Fixed& operator=(const Fixed& other);
		~Fixed();

		int toInt( void ) const;
		float toFloat( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);

// #endif