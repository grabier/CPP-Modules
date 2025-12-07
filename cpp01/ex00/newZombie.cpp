/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:04:48 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/25 13:21:10 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Zombie.hpp"

Zombie* newZombie(std::string name){
	Zombie *z = new Zombie(name);
	return (z);
}
//crea lo nombra y lo retorna