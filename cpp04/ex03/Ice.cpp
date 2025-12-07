/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:38:45 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/09 20:27:16 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
	//std::cout << "constructor ICE called" << std::endl;
	type = "ice";
	AMateria::type = "ice";
}

Ice::Ice(const Ice &other){
	type = other.getType();
	std::cout << "Ice copy constructor, type " << type << std::endl;
	
}

Ice::~Ice(){
	std::cout << "Ice destructor" << std::endl;
}

Ice &Ice::operator=(const Ice &other){
	if (this != &other)
		type = other.getType();
	return (*this);
}

void Ice::setType(const std::string &t){
	type = t;
}

std::string const &Ice::getType(void) const{
	return (type);
}

AMateria *Ice::clone() const{
	//std::cout << "CLONE input materia type: " << this->getType() << std::endl;
	AMateria *r = new Ice(*this);
	//std::cout << "CLONE return materia type: " << r->getType() << std::endl;
	return (r);
}

void Ice::use(ICharacter &target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"  << std::endl;
}