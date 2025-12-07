/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:04:42 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/25 16:36:47 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string>
#include "Weapon.hpp"

Weapon::Weapon(){
	type = "default";
	std::cout << "weapon default friendspace" << std::endl;
}

Weapon::Weapon(const std::string &type):type(type){
	std::cout << " WEAPON TYPE CONSTRUCTOR " << type << std::endl;
}

Weapon::~Weapon(){
	std::cout << type << " crushed by cookieswa" << std::endl;
}

std::string Weapon::getType(){
	//std::cout << "debug" << std::endl;
	//std::cout << "getTypea" << std::endl;
	return (this->type);
}

void Weapon::setType(std::string const &type){
	this->type = type;
}