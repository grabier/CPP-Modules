/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:37:56 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/08 18:28:28 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice: public AMateria{
	private:
		std::string type;
	public:
		Ice();
		Ice(const Ice &);
		~Ice();
		Ice &operator=(const Ice &);
		void setType(const std::string &);
		std::string const &getType(void) const;
		AMateria* clone() const;
		void use(ICharacter &target);
};