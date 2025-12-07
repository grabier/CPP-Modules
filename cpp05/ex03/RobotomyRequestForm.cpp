/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:22:04 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/15 17:41:31 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm():AForm("rb", 72, 45){
	std::cout << "RB default constructor" << std::endl;
	target = "default_target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string &t):AForm("rb", 72, 45){
	std::cout << "RB target constructor" << std::endl;
	target = t;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other)
:AForm(other.getName(), other.getSignGrade(), other.getExecGrade()){
	std::cout << "RB copy constructor" << std::endl;
	target = other.target;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RB destructor" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & other){
	if (this != &other){
		target = other.target;
	}
	return (*this);
}

void RobotomyRequestForm::execute_s() const{
	std::cout << "drillinggggggg" << std::endl;
	std::srand(time(0));
	float s = rand() % RAND_MAX;
	if (s > 0.5)
		std::cout << "Robotomy success" << std::endl;
	else
		std::cout << "Robotomy failure" << std::endl;
}