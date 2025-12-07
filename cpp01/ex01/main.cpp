/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:19:14 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/27 21:50:41 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Zombie.hpp"

int main()
{
	Zombie *z = zombieHorde(5, "paco");
	for (int i = 0; i < 5; i++){
		z[i].announce();
	}
	delete[] z;
	return (0);
}