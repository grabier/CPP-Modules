/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:04:42 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/25 13:28:00 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string.h>
#include "Zombie.hpp"

void Zombie::announce(void){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(){
	name = "default";
}

Zombie::Zombie(const std::string name):name(name){
}

Zombie::~Zombie(){
	std::cout << name << " crushed by cookies" << std::endl;
}