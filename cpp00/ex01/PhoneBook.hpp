/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:27:20 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/25 12:39:15 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <stdlib.h>
#include <string>
#include <cstdlib>

class	PhoneBook{
	private:
		Contact contacts[8];
		int		amount;
		int		flag;
	public:
		PhoneBook();
		~PhoneBook();
		void	add();
		void	search();
		void	cool_display();
		void	write_field(std::string);
		void	trunc_dot(std::string);
};

#endif