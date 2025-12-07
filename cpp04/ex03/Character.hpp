/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:58:02 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/09 20:34:50 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include "floor.hpp"

class Character: public ICharacter{
	private:
		std::string name;
		AMateria *inventory[4];
		t_floor **floor;
		
	public:
		Character();
		Character(const std::string &);
		Character(const Character &);
		~Character();
		Character &operator=(const Character &);
		void setName(std::string);
		const std::string &getName(void) const;
		void setInventory(AMateria *, int);
		AMateria *getInventory(int) const;
		void equip(AMateria *);
		void unequip(int);
		void use(int, ICharacter &);
};