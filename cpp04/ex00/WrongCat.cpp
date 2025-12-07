/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:22:51 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/13 16:49:44 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "WrongCat default constructor" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other){
	type = other.type;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other){
	if (this != &other)
		type = other.type;
	return (*this);
}

void WrongCat::setType(const std::string _type){
	type = _type;
}

std::string const WrongCat::getType(void) const{
	return (type);
}

void WrongCat::makeSound(void) const{
	std::cout << type << " says meaw" << std::endl;
}