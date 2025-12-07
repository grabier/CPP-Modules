/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:32:06 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/15 17:35:54 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat buro("manin", 5);
	//PresidentialPardonForm Manolo("Horse");
	//ShrubberyCreationForm pepi;
	RobotomyRequestForm pedro;
	buro.signForm(pedro);
	buro.executeForm(pedro);
	return 0;
}