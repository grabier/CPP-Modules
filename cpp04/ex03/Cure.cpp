/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:39:12 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/08 18:29:08 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){
	type = "cure";
}

Cure::Cure(const Cure &other){
	type = other.getType();
}

Cure::~Cure(){
	std::cout << "Cure destructor" << std::endl;
}

Cure &Cure::operator=(const Cure &other){
	if (this != &other)
		type = other.getType();
	return (*this);
}

void Cure::setType(const std::string &t){
	type = t;
}

std::string const &Cure::getType(void) const{
	return (type);
}

AMateria *Cure::clone() const{
	AMateria *r = new Cure(*this);
	return (r);
}

void Cure::use(ICharacter &target){
	std::cout << "* heals " << target.getName() << "'s wounds *"  << std::endl;
}