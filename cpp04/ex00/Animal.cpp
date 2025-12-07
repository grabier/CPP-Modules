/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 09:33:41 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/07 09:26:07 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal default constructor" << std::endl;
	type = "animal";
}

Animal::Animal(const Animal &other){
	type = other.type;
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &other){
	if (this != &other){
		type = other.type;
	}
	return (*this);
}

std::string const Animal::getType(void) const {
	return (type);
}

void Animal::makeSound(void) const {
	std::cout << "Animal makes animal sound" << std::endl;
}