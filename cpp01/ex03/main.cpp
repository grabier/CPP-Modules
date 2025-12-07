/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:19:14 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/27 21:52:04 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club1");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club1");
		bob.attack();
	}
	{
		std::cout << std::endl;
		Weapon club/*  = Weapon("crude spiked club2") */;
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club2");
		jim.attack();
	}
	return (0);
}