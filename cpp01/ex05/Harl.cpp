/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 21:08:25 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/26 21:21:21 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void){
	std::cout << "DEBUG" << std::endl;
}

void Harl::info(void){
	std::cout << "INFO" << std::endl;
}

void Harl::warning(void){
	std::cout << "WARNING" << std::endl;
}

void Harl::error(void){
	std::cout << "ERROR" << std::endl;
}

void Harl::complain(std::string level){
	void (Harl::*complain_arr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string a[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++){
		if (level == a[i])
			return (this->*complain_arr[i])();
	}
	std::cout << "invalid option" << std::endl;
}
