/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 09:33:39 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/07 09:13:22 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class AAnimal{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(const AAnimal &other);
		virtual ~AAnimal();
		virtual std::string const getType(void) const;
		AAnimal& operator=(const AAnimal &other);
		virtual void	makeSound() const = 0;
};