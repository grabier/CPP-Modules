/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 09:40:18 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/31 17:31:21 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
//constructors
Fixed::Fixed(){
	fixed = 0;
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other){
	//std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int n){
	//std::cout << "Int constructor called" << std::endl;
	this->fixed = n << this->fbits;//multiplicamos * 2⁸
}

Fixed::Fixed(const float n){
	//std::cout << "Float constructor called" << std::endl;
	int	scale = 1 << this->fbits;//equivale a 2⁸
	this->fixed = static_cast<int>(roundf(n * scale));
}

Fixed::~Fixed(){
	//std::cout << "Destructor called" << std::endl;
}


//operator overload
void Fixed::operator=(const Fixed &other){
	//std::cout << "Copy assignment operator called" << std::endl;
	this->fixed = other.getRawBits();
}

std::ostream& operator<<(std::ostream &os, const Fixed &other){
	os << other.toFloat();
	return (os);
}

bool Fixed::operator<(const Fixed &other){
	if (this->fixed < other.getRawBits())
		return (1);
	else
		return (0);
}

bool Fixed::operator>(const Fixed &other){
	if (this->fixed > other.getRawBits())
		return (1);
	else
		return (0);
}

bool Fixed::operator<=(const Fixed &other){
	if (this->fixed <= other.getRawBits())
		return (1);
	else
		return (0);
}

bool Fixed::operator>=(const Fixed &other){
	if (this->fixed >= other.getRawBits())
		return (1);
	else
		return (0);
}

bool Fixed::operator==(const Fixed &other){
	if (this->fixed == other.getRawBits())
		return (1);
	else
		return (0);
}

bool Fixed::operator!=(const Fixed &other){
	if (this->fixed != other.getRawBits())
		return (1);
	else
		return (0);
}

Fixed Fixed::operator+(const Fixed &other){
	return Fixed(fixed + other.getRawBits());
}

Fixed Fixed::operator-(const Fixed &other){
	return Fixed(fixed - other.getRawBits());
}

Fixed Fixed::operator*(const Fixed &other){
	float a = this->toFloat();
	float b = other.toFloat();
	return Fixed(a * b);
}

Fixed Fixed::operator/(const Fixed &other){
	float a = this->toFloat();
	float b = other.toFloat();
	return Fixed(a / b);
}

Fixed Fixed::operator++(void){
	++fixed;
	return (*this);
}

Fixed Fixed::operator++(int j){
	Fixed	temp = *this;
	++fixed;
	return (temp);
}

Fixed Fixed::operator--(void){
	--fixed;
	return (*this);
}

Fixed Fixed::operator--(int j){
	Fixed	temp = *this;
	--fixed;
	return (temp);
}

//getter/setters
int Fixed::getRawBits(void) const{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed);
}

void Fixed::setRawBits(const int raw){
	//std::cout << "setRawBits member function called" << std::endl;
	this->fixed = raw;
}


//conversions
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


//static members
Fixed& Fixed::max(Fixed &f1, Fixed &f2){
	if (f1 >= f2)
		return (f1);
	else
		return (f2);
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2){
	if (f1 <= f2)
		return (f1);
	else
		return (f2);
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2){
	if (const_cast<Fixed&>(f1) >= f2)
		return (f1);
	else
		return (f2);
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2){
	if (const_cast<Fixed&>(f1) <= f2)
		return (f1);
	else
		return (f2);
}