/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:18:11 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/15 18:45:04 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
	std::cout << "Intern default constructor" << std::endl;
}

Intern::Intern(const Intern &){
	std::cout << "Intern copy constructor" << std::endl;
}

Intern::~Intern(){
	std::cout << "Intern destructor" << std::endl;
}

Intern &Intern::operator=(const Intern &){
	return (*this);
}

AForm *Intern::makeForm(std::string name, std::string target){
	std::string a[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	int i;
	if (name != "PresidentialPardonForm" && name != "RobotomyRequestForm" 
		&& name != "ShrubberyCreationForm"){
			std::cout << "not a valid form" << std::endl;
	}
	for(i = 0; i < 3; i++){
		if (name == a[i]){
			switch(i){
				case 0:
					return (new PresidentialPardonForm(target));
				case 1:
					return (new RobotomyRequestForm(target));
				case 2:
					return (new ShrubberyCreationForm(target));
			}
		}
	}
	return (NULL);
}