/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:31:19 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/07 09:46:46 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain &other){
	std::cout << "Brain copy constructor" << std::endl;
	for(int i = 0; i < 100; i++){
		ideas[i] = other.getIdea(i);
	}
}

Brain::~Brain(){
	std::cout << "Brain destructor" << std::endl;
}

Brain& Brain::operator=(const  Brain &other){
	if (this != &other){
		for(int i = 0; i < 100; i++){
			ideas[i] = other.getIdea(i);
		}
	}
	return *this;
}

void Brain::setIdea(const std::string id, int i){
	ideas[i] = id;
}

std::string const Brain::getIdea(int i) const{
	return (ideas[i]);
}