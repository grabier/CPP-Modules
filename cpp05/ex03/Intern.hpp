/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:18:23 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/15 18:39:51 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

//However, the intern has one key ability: the makeForm() function. This function
//takes two strings as parameters: the first one represents the name of a form, and the
//second one represents the target of the form. It returns a pointer to a AForm object
//(corresponding to the form name passed as a parameter), with its target initialized to
//the second parameter.
//It should print something like:
//Intern creates <form>
//If the provided form name does not exist, print an explicit error message

class Intern{
	public:
		Intern();
		Intern(const Intern &);
		~Intern();
		Intern & operator=(const Intern &);
		AForm *makeForm(std::string, std::string);
};