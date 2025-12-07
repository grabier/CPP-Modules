/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:26:39 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/25 16:39:54 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string.h>
#include "HumanB.hpp"

HumanB::HumanB(const std::string name, Weapon wea):name(name){
	this->setWeapon(wea);
	std::cout << "HumanB default with type: "<< wea.getType()  << std::endl;
	
}

HumanB::HumanB(const std::string name){
	this->name = name;
	wea = NULL;
}

HumanB::~HumanB(){
	if(this->wea)
		delete this->wea;
	std::cout << name << " crushed by cookiesHB" << std::endl;
}

std::string HumanB::get_name(){
	return (name);
}

void HumanB::set_name(std::string name){
	this->name = name;
}

void HumanB::attack(){
	//std::cout << "debug" << std::endl;
	if (this->wea)
		std::cout << this->name << " attacks with their " << this->wea->getType() << std::endl;
	else
		std::cout << this->name << " slaps with their leg" << std::endl;
	
}

void HumanB::setWeapon(Weapon &wea){
	std::cout <<" setWeeapooon" << std::endl;
	this->wea = new Weapon(wea.getType());
}