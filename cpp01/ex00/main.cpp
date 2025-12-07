/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:19:14 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/25 13:27:29 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Zombie.hpp"

int main()
{
	Zombie *z = newZombie("paco");
	Zombie jose;
	z->announce();
	randomChump("pedro");
	delete z;
	return (0);
}