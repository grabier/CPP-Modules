/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 09:40:18 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/31 13:08:34 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int n){
	std::cout << "Int constructor called" << std::endl;
	this->fixed = n << this->fbits;//multiplicamos * 2⁸
}

Fixed::Fixed(const float n){
	std::cout << "Float constructor called" << std::endl;
	int	scale = 1 << this->fbits;//equivale a 2⁸
	this->fixed = static_cast<int>(roundf(n * scale));
}

void Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed = other.getRawBits();
}

std::ostream& operator<<(std::ostream &os, const Fixed &other){
	os << other.toFloat();
	return (os);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed);
}

void Fixed::setRawBits(const int raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed = raw;
}

float Fixed::toFloat(void) const{
	float ret;
	int	scale = 1 << this->fbits;
	ret = (float)this->fixed / (float)scale;
	return (ret);
}

int	Fixed::toInt(void) const{
	int ret;
	ret = this->fixed >> this->fbits;
	return (ret);
}