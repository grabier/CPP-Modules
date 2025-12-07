/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:25:23 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/22 17:36:10 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <cctype>
#include <limits>

class ScalarConverter{
	private:
		ScalarConverter(){}
		ScalarConverter(const ScalarConverter &){}
		~ScalarConverter(){}
		void operator=(const ScalarConverter &){}
	public:
		static void convert(std::string);
};

void putnan();
void putinf(int mode);
int is_special(std::string input);
int parse(std::string input);