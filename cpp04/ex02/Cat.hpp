/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 09:53:39 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/07 11:05:58 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
	private:
		Brain *brain;
	public: 
		Cat();
		Cat(const Cat &other);
		~Cat();
		Cat& operator=(const Cat &other);
		void setType(const std::string _type);
		std::string const getType(void) const;
		void setIdea(const std::string, int);
		std::string const getIdea(int) const;
		void makeSound(void) const;
};