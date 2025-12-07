/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:04:45 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/27 21:52:12 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <stdlib.h>
#include <string>
#include <cstdlib>

class	Weapon{
	private:
	std::string type;
	public:
		Weapon();
		Weapon(const std::string &type);
		~Weapon();
		std::string getType();
		void setType(std::string const &type);
};

#endif