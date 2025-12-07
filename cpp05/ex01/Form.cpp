/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:41:45 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/14 19:57:25 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


//**************CONSTRUCTORS***************** 
Form::Form():name("default_form"), sign_grade(150), exec_grade(150){}

Form::Form(const std::string &n):name(n), sign_grade(150), exec_grade(150){}

Form::Form(int sg, int eg):name("default_form"), sign_grade(sg), exec_grade(eg){
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

Form::Form(const std::string n, int sg, int eg):name(n), sign_grade(sg), exec_grade(eg){
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

Form::Form(const Form &other):sign_grade(other.sign_grade), exec_grade(other.exec_grade){}

Form::~Form(){
	std::cout << "Form destructor" << std::endl;
}

//**************GETTERS/SETTERS*****************
int Form::getSignGrade() const{
	return (sign_grade);
}

int Form::getExecGrade() const{
	return (exec_grade);
}

const std::string Form::getName() const{
	return (name);
}

//**************OVERLOADS*****************
void Form::operator=(const Form &){
	std::cout << "Atributes are const, no way to copy them" << std::endl;
}

void Form::beSigned(const Bureaucrat &b){
	try{
		if (sign_grade < b.getGrade()){
			throw (Form::GradeTooLowException());
			std::cout << b.getName() << " couldn't sign " << name << " because grade too low" << std::endl;
		}
		else if (is_signed)
			std::cout << b.getName() << " couldn't sign " << name << " because it's already signed" << std::endl;
		else{
			std::cout << b.getName() << " signed " << name << std::endl;
			is_signed = 1;
		}
	}
	catch(std::exception &e){
		std::cout << e.what();
	}
}

const char *Form::GradeTooHighException::what() const throw(){
	return ("Form: Grade too high\n");
}

const char *Form::GradeTooLowException::what() const throw(){
	return ("Form: Grade too low\n");
}

std::ostream& operator<<(std::ostream &os, const Form &other){
	os << other.getName() << "form sign grade: " << other.getSignGrade() 
		<< ", form exec grade " << other.getExecGrade() << std::endl;
	return (os);
}