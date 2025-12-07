/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:32:06 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/14 19:58:49 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
	Bureaucrat St("el firmas", 97);
	Form pilot("titulo de avioneta finladesa", 96, 2);
	Bureaucrat St2("manolos");
	
	pilot.beSigned(St2);
	St2.incremetGrade();
	pilot.beSigned(St2);
	pilot.beSigned(St2);
	std::cout << pilot;
	
	
	return 0;
}