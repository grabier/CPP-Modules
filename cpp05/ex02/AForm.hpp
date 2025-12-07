/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 10:25:57 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/15 17:41:53 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	private:
		const std::string name;
		bool is_signed;
		const int sign_grade;
		const int exec_grade;
	public:
		AForm();
		AForm(const std::string &);
		AForm(int, int);
		AForm(const std::string, int, int);
		AForm(const AForm &);
		virtual ~AForm();

		int	 getSignGrade() const;
		int	 getExecGrade() const;
		void setIsSigned(bool);
		bool getIsSigned() const;
		const std::string getName() const;
		
		void operator=(const AForm &);
		
		void beSigned(const Bureaucrat &);
		
		void execute(const Bureaucrat &) const;

		virtual void execute_s() const = 0;
		
		class GradeTooHighException: public std::exception{
			public:
				const char *what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
				const char *what() const throw();
		};
};



std::ostream& operator<<(std::ostream &os, const AForm &other);