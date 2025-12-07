/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:39:22 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/08 18:28:59 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure: public AMateria{
	private:
		std::string type;
	public:
		Cure();
		Cure(const Cure &);
		~Cure();
		Cure &operator=(const Cure &);
		void setType(const std::string &);
		std::string const &getType(void) const;
		AMateria* clone() const;
		void use(ICharacter &target);
};