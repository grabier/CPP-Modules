/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:04:48 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/25 13:56:29 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie *z = new Zombie[N];
	for (int i = 0; i < N; i++){
		z[i].set_name(name);
	}
	return (z);
}
//crea lo nombra y lo retorna