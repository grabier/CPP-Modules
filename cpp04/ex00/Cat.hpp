/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 09:53:39 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/07 09:13:58 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal{
	public: 
		Cat();
		Cat(const Cat &other);
		~Cat();
		Cat& operator=(const Cat &other);
		void setType(const std::string _type);
		std::string const getType(void) const;
		void makeSound(void) const;
};