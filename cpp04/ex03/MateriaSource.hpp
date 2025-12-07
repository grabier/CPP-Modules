/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:32:33 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/08 17:37:56 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource{
	private:
		AMateria *minventory[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &);
		~MateriaSource();
		MateriaSource &operator=(const MateriaSource &);
		void setInventoryM(AMateria *, int);
		AMateria *getInventoryM(int) const;
		void learnMateria(AMateria *);
		//copies the parameter to the inventory so it can
		//be cloned later
		AMateria *createMateria(std::string const &);
		//returns a new materia, copy of one of the inventory
		//whose type is equal to the parameter
		//returns 0 if type unknown
};