/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:05:01 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/15 17:41:27 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

//All of them take only one parameter in their constructor: the target of the form. For
//example, "home" if you want to plant shrubbery at home

//RobotomyRequestForm: Required grades: sign 72, exec 45
//Makes some drilling noises, then informs that <target> has been robotomized
//successfully 50% of the time. Otherwise, it informs that the robotomy failed

class RobotomyRequestForm: public AForm{
	private:
		std::string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string &);
		RobotomyRequestForm(const RobotomyRequestForm &);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &);
		void execute_s() const;
};