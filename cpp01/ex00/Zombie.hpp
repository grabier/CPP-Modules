/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:04:45 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/25 13:26:29 by gmontoro         ###   ########.fr       */
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
};

Zombie* newZombie(std::string name);
//crea lo nombra y lo retorna
void randomChump(std::string name);
//crea nombra y anuncia
#endif