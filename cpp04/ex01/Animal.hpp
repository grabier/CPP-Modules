/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 09:33:39 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/07 09:13:22 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &other);
		virtual ~Animal();
		virtual std::string const getType(void) const;
		Animal& operator=(const Animal &other);
		virtual void	makeSound() const;
};