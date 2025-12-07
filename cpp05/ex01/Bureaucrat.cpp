/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:31:42 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/14 19:51:29 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class Form;

//************* CONSTRUCTOR/DESTRUCTOR*******************
Bureaucrat::Bureaucrat():name("Defaultino"){
	std::cout << "Bureaucrat default constructor" << std::endl;
	this->setGrade(150);
}

Bureaucrat::Bureaucrat(const std::string &n):name(n){
	std::cout << "Bureaucrat name constructor" << std::endl;
	this->setGrade(150);
}

Bureaucrat::Bureaucrat(int n):name("Defaultino"){
	std::cout << "Bureaucrat grade constructor" << std::endl;
	try{
		this->setGrade(n);
	}
	catch(std::exception &e){
		std::cout << e.what();
	}
}

Bureaucrat::Bureaucrat(std::string na, int n):name(na){
	std::cout << "Bureaucrat full constructor" << std::endl;
	try{
		this->setGrade(n);
	}
	catch(std::exception &e){
		std::cout << e.what();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &other){
	static_cast<std::string>(name) = other.name;
	grade = other.grade;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destructor " << std::endl;
}

//*************OVERLOADS*******************
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &other){
	if (this != &other){
		static_cast<std::string>(name) = other.name;
		grade = other.grade;
	}
	return (*this);
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &other){
	os << other.getName() << ", bureaucrat grade: " << other.getGrade() << std::endl;
	return (os);
}

//*************GETTERS/SETTERS*******************
const std::string Bureaucrat::getName() const{
	return (name);
}

void Bureaucrat::setName(const std::string &n){
	static_cast<std::string>(name) = n;
}

int Bureaucrat::getGrade() const{
	return (this->grade);
}

void Bureaucrat::setGrade(int n){
	if (n > 150)
		throw(GradeTooLowException());
	else if (n < 1)
		throw(GradeTooHighException());
	else
		grade = n;
}


//*************GRADE INCREMENT*******************
void Bureaucrat::incremetGrade(){
	try{
		this->setGrade(grade - 1);
	}
	catch(std::exception &e){
		std::cout << e.what();
	}
}

void Bureaucrat::decrementGrade(){
	try{
		this->setGrade(grade + 1);
	}
	catch(std::exception &e){
		std::cout << e.what();
	}
}

void Bureaucrat::signForm(Form &f){
	f.beSigned(*this);
}

//*************EXCEPTIONS*******************
const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Buro: Grade too high\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Buro: Grade too low\n");
}