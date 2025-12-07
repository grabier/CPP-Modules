/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:32:06 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/15 18:50:27 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main(void)
{
	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
	
	delete rrf;
	/* Bureaucrat buro("manin", 5);
	//PresidentialPardonForm Manolo("Horse");
	//ShrubberyCreationForm pepi;
	RobotomyRequestForm pedro;
	buro.signForm(pedro);
	buro.executeForm(pedro); */
	return 0;
}