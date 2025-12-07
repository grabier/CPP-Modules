/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:26:24 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/25 16:39:59 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Weapon.hpp"

class	HumanB{
	private:
		std::string name;
		Weapon		*wea;
		HumanB();
		//HumanB(const std::string name);
	public:
		//HumanB(std::string name, Weapon &weapon);
		HumanB(const std::string name);
		HumanB(const std::string name, Weapon wea);
		~HumanB();
		std::string get_name();
		void set_name(std::string name);
		void setWeapon(Weapon &wea);
		void attack();
};