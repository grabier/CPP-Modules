/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:31:54 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/15 17:11:28 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Now, add the execute(Bureaucrat const & executor) const member function to
//the base form and implement a function to execute the form’s action in the concrete
//classes. You must check that the form is signed and that the grade of the bureaucrat attempting to execute the form is high enough. Otherwise, throw an appropriate exception.
//Whether you check the requirements in every concrete class or in the base class (and
//then call another function to execute the form) is up to you. However, one way is more
//elegant than the other.
//Lastly, add the executeForm(AForm const & form) const member function to the
//Bureaucrat class. It must attempt to execute the form. If successful, print something like:
//<bureaucrat> executed <form>
//If not, print an explicit error message.

#pragma once

#include <iostream>
#include <exception>
#include <string.h>
#include "AForm.hpp"

class AForm;

class Bureaucrat{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string &);
		Bureaucrat(int);
		Bureaucrat(std::string , int);
		Bureaucrat(const Bureaucrat &);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &);
		void setName(const std::string&);
		const std::string getName() const;
		void setGrade(int);
		int getGrade() const;
		void incremetGrade();
		void decrementGrade();
		void signForm(AForm &);
		void executeForm(AForm const &) const;

		class GradeTooHighException: public std::exception{
			public:
				const char *what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
				const char *what() const throw();
		};
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat &other);