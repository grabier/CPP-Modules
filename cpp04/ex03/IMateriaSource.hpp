/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:29:47 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/08 12:35:59 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class IMateriaSource{
	public:
		virtual ~IMateriaSource(){}
		virtual void learnMateria(AMateria *) = 0;
		virtual AMateria *createMateria(std::string const &) = 0;
};