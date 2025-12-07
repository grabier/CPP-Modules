/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:11:55 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/07 09:14:16 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal{
	public: 
		Dog();
		Dog(const Dog &other);
		~Dog();
		Dog& operator=(const Dog &other);
		void setType(const std::string _type);
		std::string const getType(void) const;
		void makeSound(void) const;
};