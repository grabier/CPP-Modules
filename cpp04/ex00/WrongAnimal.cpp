/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:37:10 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/07 09:17:53 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other){
	type = other.type;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other){
	if (this != &other){
		type = other.type;
	}
	return (*this);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal makes WrongAnimal sound" << std::endl;
}

std::string const WrongAnimal::getType(void) const {
	return (type);
}