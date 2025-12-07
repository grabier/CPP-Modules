/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 20:10:44 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/15 17:41:36 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

//PresidentialPardonForm: Required grades: sign 25, exec 5
//Informs that <target> has been pardoned by Zaphod Beeblebrox.


class PresidentialPardonForm: public AForm{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string &);
		PresidentialPardonForm(const PresidentialPardonForm &);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &);
		void execute_s() const;
};