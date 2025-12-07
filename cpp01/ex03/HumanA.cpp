/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:16:26 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/25 16:31:29 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string.h>
#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &wea):name(name), wea(wea){
}

HumanA::~HumanA(){
	std::cout << name << " crushed by cookiesha" << std::endl;
}

std::string HumanA::get_name(){
	return (name);
}

void HumanA::set_name(std::string name){
	this->name = name;
}

void HumanA::set_weapon(Weapon &wea){
	this->wea = wea;
}

void HumanA::attack(){
	std::cout << name << " attacks with their " << this->wea.getType() << std::endl;
}