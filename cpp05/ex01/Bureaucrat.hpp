/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:31:54 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/14 19:53:19 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#pragma once

#include <iostream>
#include <exception>
#include <string.h>
#include "Form.hpp"

class Form;

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
		void signForm(Form &);

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