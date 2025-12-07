/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:41:45 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/14 19:57:25 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


//**************CONSTRUCTORS***************** 
AForm::AForm():name("default_AForm"), sign_grade(150), exec_grade(150){}

AForm::AForm(const std::string &n):name(n), sign_grade(150), exec_grade(150){}

AForm::AForm(int sg, int eg):name("default_AForm"), sign_grade(sg), exec_grade(eg){
	try{
		if (sg > 150 || eg > 150)
			throw(GradeTooLowException());
		if (sg < 1 || eg < 1)
			throw(GradeTooHighException());
	}
	catch(std::exception &e){
		std::cout << e.what();
	}
}

AForm::AForm(const std::string n, int sg, int eg):name(n), sign_grade(sg), exec_grade(eg){
	try{
		if (sg > 150 || eg > 150)
			throw(GradeTooLowException());
		if (sg < 1 || eg < 1)
			throw(GradeTooHighException());
	}
	catch(std::exception &e){
		std::cout << e.what();
	}
}

AForm::AForm(const AForm &other):sign_grade(other.sign_grade), exec_grade(other.exec_grade){}

AForm::~AForm(){
	std::cout << "AForm destructor" << std::endl;
}

//**************GETTERS/SETTERS*****************
int AForm::getSignGrade() const{
	return (sign_grade);
}

int AForm::getExecGrade() const{
	return (exec_grade);
}

const std::string AForm::getName() const{
	return (name);
}

bool AForm::getIsSigned() const{
	return (is_signed);
}

void AForm::setIsSigned(bool b){
	is_signed = b;
}

//**************OVERLOADS*****************
void AForm::operator=(const AForm &){
	std::cout << "Atributes are const, no way to copy them" << std::endl;
}

void AForm::beSigned(const Bureaucrat &b){
	try{
		if (sign_grade < b.getGrade()){
			throw (AForm::GradeTooLowException());
			std::cout << b.getName() << " couldn't sign " << name << " because grade too low" << std::endl;
		}
		else if (is_signed)
			std::cerr << b.getName() << " couldn't sign " << name << " because it's already signed" << std::endl;
		else{
			std::cout << b.getName() << " signed " << name << std::endl;
			is_signed = 1;
		}
	}
	catch(std::exception &e){
		std::cerr << e.what();
	}
}

void AForm::execute(const Bureaucrat &b) const{
	try{
		if (b.getGrade() > getExecGrade() || getIsSigned() == false){
			throw(GradeTooLowException());
		}
		else{
			std::cout << b.getName() << " executed " << name << std::endl;
			this->execute_s();
		}
	}
	catch(std::exception &e){
		std::cerr << "explicit error message" << std::endl;
		std::cerr << e.what();
	}
}

const char *AForm::GradeTooHighException::what() const throw(){
	return ("AForm: Grade too high\n");
}

const char *AForm::GradeTooLowException::what() const throw(){
	return ("AForm: Grade too low\n");
}

std::ostream& operator<<(std::ostream &os, const AForm &other){
	os << other.getName() << "AForm sign grade: " << other.getSignGrade() 
		<< ", AForm exec grade " << other.getExecGrade() << std::endl;
	return (os);
}