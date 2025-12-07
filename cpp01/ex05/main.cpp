/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 21:04:30 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/26 21:21:00 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]){
	if (argc != 2){
		std::cout << "invalid arguments" << std::endl;
		return (1);
	}
	Harl paco;
	paco.complain(argv[1]);
	return (0);
}