/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:03:30 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/15 17:41:40 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("PP", 25, 5){
	std::cout << "PP default constructor" << std::endl;
	target = "default_target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string &t):AForm("PP", 25, 5){
	std::cout << "PP target constructor" << std::endl;
	target = t;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other)
:AForm(other.getName(), other.getSignGrade(), other.getExecGrade()){
	std::cout << "PP copy constructor" << std::endl;
	target = other.target;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PP destructor" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & other){
	if (this != &other){
		target = other.target;
	}
	return (*this);
}

void PresidentialPardonForm::execute_s() const{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}