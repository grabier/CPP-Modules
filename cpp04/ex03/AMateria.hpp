/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:22:04 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/08 18:28:11 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const &type);
		virtual ~AMateria(){}
		AMateria &operator=(const AMateria &);
		virtual std::string const &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &){}
};