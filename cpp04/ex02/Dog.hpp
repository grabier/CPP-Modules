/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:11:55 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/07 11:06:02 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
	private:
		Brain *brain;
	public: 
		Dog();
		Dog(const Dog &other);
		~Dog();
		Dog& operator=(const Dog &other);
		void setType(const std::string _type);
		std::string const getType(void) const;
		void setIdea(const std::string, int);
		std::string const getIdea(int) const;
		void makeSound(void) const;
};