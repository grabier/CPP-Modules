/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:02:54 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/15 17:41:14 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <ctime>
#include <iostream>
#include <cstdlib>
#include "AForm.hpp"

class Bureaucrat;

//ShrubberyCreationForm: Required grades: sign 145, exec 137
//Creates a file <target>_shrubbery in the working directory
//and writes ASCII trees inside it.

class ShrubberyCreationForm: public AForm{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string &);
		ShrubberyCreationForm(const ShrubberyCreationForm &);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
		void execute_s() const;
};
