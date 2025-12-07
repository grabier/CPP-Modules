/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:04:48 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/25 15:32:01 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Weapon.hpp"

class	HumanA{
	private:
		std::string name;
		Weapon		&wea;
		/* HumanA();
		HumanA(const std::string name); */
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		std::string get_name();
		void set_name(std::string name);
		void set_weapon(Weapon &wea);
		void attack();
};
//crea lo nombra y lo retorna