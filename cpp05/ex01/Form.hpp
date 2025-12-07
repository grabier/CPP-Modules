/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 10:25:57 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/14 19:54:25 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
		const std::string name;
		bool is_signed;
		const int sign_grade;
		const int exec_grade;
	public:
		Form();
		Form(const std::string &);
		Form(int, int);
		Form(const std::string, int, int);
		Form(const Form &);
		~Form();

		int	 getSignGrade() const;
		int	 getExecGrade() const;
		const std::string getName() const;
		
		void operator=(const Form &);
		
		void beSigned(const Bureaucrat &);
		
	
		class GradeTooHighException: public std::exception{
			public:
				const char *what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
				const char *what() const throw();
		};
};

std::ostream& operator<<(std::ostream &os, const Form &other);