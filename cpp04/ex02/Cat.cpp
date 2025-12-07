/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 09:58:00 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/13 16:36:34 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat default constructor" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &other){
	std::cout << "Cat copy constructor" << std::endl;
	type = other.type;
	delete brain;
	brain = new Brain(*other.brain);
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

Cat& Cat::operator=(const Cat &other){
	if (this != &other){
		type = other.type;
		delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

void Cat::setType(const std::string _type){
	type = _type;
}

std::string const Cat::getType(void) const{
	return (type);
}

void Cat::setIdea(const std::string id, int i){
	this->brain->setIdea(id, i);
}

std::string const Cat::getIdea(int i) const{
	return (this->brain->getIdea(i));
}

void Cat::makeSound(void) const{
	std::cout << type << " says meaw" << std::endl;
}