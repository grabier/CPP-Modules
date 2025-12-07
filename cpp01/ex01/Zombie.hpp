/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:04:45 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/25 13:51:39 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <stdlib.h>
#include <string>
#include <cstdlib>

class	Zombie{
	private:
		std::string name;
	public:
		void announce(void);// name BraiiiiiiinnnzzzZ...
		Zombie();
		Zombie(const std::string name);
		~Zombie();
		std::string get_name();
		void set_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);
//crea N zombies en memoria asigna name a cada uno y  devuelve pointer
//al primero

#endif