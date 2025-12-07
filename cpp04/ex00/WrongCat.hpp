/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:22:49 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/07 09:20:39 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public: 
		WrongCat();
		WrongCat(const WrongCat &other);
		~WrongCat();
		WrongCat& operator=(const WrongCat &other);
		void setType(const std::string _type);
		std::string  const getType(void) const;
		void makeSound(void) const ;
};

