/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 21:08:25 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/27 16:02:32 by gmontoro         ###   ########.fr       */
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
	int i;
	if (level != "DEBUG" && level != "INFO" 
		&& level != "WARNING" && level != "ERROR"){
			std::cout << "not a valid level" << std::endl;
		}
	for(i = 0; i < 4; i++){
		if (level == a[i]){
			switch(i){
				case 0:
					(this->*complain_arr[0])();
				case 1:
					(this->*complain_arr[1])();
				case 2:
					(this->*complain_arr[2])();
				case 3:
					(this->*complain_arr[3])();
			}
		}
	}
}
