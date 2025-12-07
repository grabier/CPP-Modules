/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randdomChump.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:04:39 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/25 13:22:36 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Zombie.hpp"

void randomChump(std::string name){
	Zombie z(name);
	z.announce();
}