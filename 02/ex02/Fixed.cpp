/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 22:03:42 by ialdidi           #+#    #+#             */
/*   Updated: 2025/01/13 22:29:59 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::FractBit = 8;

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->number = 0;
}

Fixed::Fixed(int const Nbr){
	this->number = Nbr << this->FractBit;
}

Fixed::Fixed(float const Nbr){
	this->number = roundf(Nbr * (1 << this->FractBit));
}

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor called" << std::endl;
	this->number = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->number = other.getRawBits();
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->number);
}

void Fixed::setRawBits(int const raw){
	this->number = raw;
}

float Fixed::toFloat( void ) const{
	return(static_cast<float>(this->number) / (1 << this->FractBit));
}

int Fixed::toInt( void ) const{
	return (this->number >> this->FractBit);
}

std::ostream& operator<<(std::ostream& COUT, Fixed const &i){
	COUT << i.toFloat();
	return (COUT);
}

bool Fixed::operator==(const Fixed& other) const{
	return (this->number == other.getRawBits());
}

bool Fixed::operator!=(const Fixed& other) const{
	return (this->number != other.getRawBits());
}

bool Fixed::operator>=(const Fixed& other) const{
	return (this->number >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed& other) const{
	return (this->number <= other.getRawBits());
}

bool Fixed::operator<(const Fixed& other) const{
	return (this->number < other.getRawBits());
}

bool Fixed::operator>(const Fixed& other) const{
	return (this->number > other.getRawBits());
}

Fixed Fixed::operator+(const Fixed& other) const{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) const{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) const{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) const{
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed Fixed::operator++(int){
	Fixed	tmp(*this);
	this->number++;
	return (tmp);
}

Fixed Fixed::operator--(int){ //why int
	Fixed	tmp(*this);
	this->number--;
	return (tmp);
}

Fixed& Fixed::operator++(void){
	this->number++;
	return (*this);
}

Fixed& Fixed::operator--(void){
	this->number--;
	return (*this);
}

Fixed& Fixed::min(Fixed &a, Fixed &b){
	return (a.getRawBits() > b.getRawBits() ? b : a);
}

Fixed& Fixed::max(Fixed &a, Fixed &b){
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b){
	return (a.getRawBits() > b.getRawBits() ? b : a);
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b){
	return (a.getRawBits() > b.getRawBits() ? a : b);
}