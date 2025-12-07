/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:29:44 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/15 17:41:20 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

//ShrubberyCreationForm: Required grades: sign 145, exec 137
//Creates a file <target>_shrubbery in the working directory
//and writes ASCII trees inside it.

ShrubberyCreationForm::ShrubberyCreationForm():AForm("sh", 145, 137){
	std::cout << "SB default constructor" << std::endl;
	target = "default_target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &t):AForm("sh", 145, 137){
	std::cout << "SB target constructor" << std::endl;
	target = t;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other)
:AForm(other.getName(), other.getSignGrade(), other.getExecGrade()){
	std::cout << "SB copy constructor" << std::endl;
	target = other.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "SB destructor" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other){
	if (this != &other){
		target = other.target;
	}
	return (*this);
}

void ShrubberyCreationForm::execute_s() const{
	std::string fname = target + "_shrubbery";
	std::fstream file(fname.c_str());
	if (file.fail())
		std::cout << "ferror" << std::endl;
	file << "T\nA\n";
}