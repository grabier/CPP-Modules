/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:27:11 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/07 09:25:55 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog default constructor" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &other){
	type = other.type;
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &other){
	if (this != &other)
		type = other.type;
	return (*this);
}

void Dog::setType(const std::string _type){
	type = _type;
}

std::string const Dog::getType(void) const {
	return (type);
}

void Dog::makeSound(void) const{
	std::cout << type << " says bark" << std::endl;
}