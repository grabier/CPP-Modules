/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 09:33:41 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/07 09:26:07 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
	std::cout << "AAnimal default constructor" << std::endl;
	type = "AAnimal";
}

AAnimal::AAnimal(const AAnimal &other){
	type = other.type;
}

AAnimal::~AAnimal(){
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &other){
	if (this != &other){
		type = other.type;
	}
	return (*this);
}

std::string const AAnimal::getType(void) const {
	return (type);
}

void AAnimal::makeSound(void) const {
	std::cout << "AAnimal makes AAnimal sound" << std::endl;
}