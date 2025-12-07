/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:27:11 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/13 15:44:05 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog default constructor" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &other){
	type = other.type;
	delete brain;
	brain = new Brain(*other.brain);//deeps copy
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

Dog& Dog::operator=(const Dog &other){
	std::cout << "Dog operator = called\n";
	if (this != &other){
		type = other.type;
		delete brain;
		brain = new Brain(*other.brain);//deeps copy
	}
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