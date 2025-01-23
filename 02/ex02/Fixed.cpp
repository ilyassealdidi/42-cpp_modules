/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 22:03:42 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/23 19:06:49 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::FractionalPartBits = 8;

Fixed::Fixed() {
	this->number = 0;
}

Fixed::Fixed(const int value) {
	this->number = value << Fixed::FractionalPartBits;
}

Fixed::Fixed(const float value) {
	this->number = roundf(value * (1 << Fixed::FractionalPartBits));
}

Fixed::Fixed(const Fixed &other) {
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
	if (this != &other)
		this->number = other.getRawBits();
	return *this;
}

Fixed::~Fixed() {
}

int	Fixed::getRawBits() const {
	return (this->number);
}

void Fixed::setRawBits(int const raw) {
	this->number = raw;
}

float Fixed::toFloat(void) const {
	return(this->number / (1 << this->FractionalPartBits));
}

int Fixed::toInt(void) const {
	return (this->number >> this->FractionalPartBits);
}

std::ostream& operator<<(std::ostream& stream, Fixed const &obj) {
	stream << obj.toFloat();
	return (stream);
}

bool Fixed::operator==(const Fixed& other) const {
	return (this->number == other.getRawBits());
}

bool Fixed::operator!=(const Fixed& other) const {
	return (this->number != other.getRawBits());
}

bool Fixed::operator>=(const Fixed& other) const {
	return (this->number >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed& other) const {
	return (this->number <= other.getRawBits());
}

bool Fixed::operator<(const Fixed& other) const {
	return (this->number < other.getRawBits());
}

bool Fixed::operator>(const Fixed& other) const {
	return (this->number > other.getRawBits());
}

Fixed Fixed::operator+(const Fixed& other) const {
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) const {
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) const {
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) const {
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed Fixed::operator++(int) {
	Fixed	tmp(*this);
	this->number++;
	return (tmp);
}

Fixed Fixed::operator--(int) { //why int
	Fixed	tmp(*this);
	this->number--;
	return (tmp);
}

Fixed& Fixed::operator++(void) {
	this->number++;
	return (*this);
}

Fixed& Fixed::operator--(void) {
	this->number--;
	return (*this);
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
	return (a.getRawBits() > b.getRawBits() ? b : a);
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b) {
	return (a.getRawBits() > b.getRawBits() ? b : a);
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b) {
	return (a.getRawBits() > b.getRawBits() ? a : b);
}