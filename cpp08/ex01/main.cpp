/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:45:41 by gmontoro          #+#    #+#             */
/*   Updated: 2025/10/06 18:33:16 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
int main()
{
	Span sp = Span(2000000);
	sp.addMultipleNumbers(20000);
	/* sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9); */
	std::cout << "shortest_span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest_span: " << sp.longestSpan() << std::endl;
	{
		Span sp = Span(2);
		std::cout << "lets try to go past full" << std::endl;
		sp.addNumber(6);
		sp.addNumber(3);
		try{
			sp.addNumber(17);
		}
		catch(std::exception &e){
			std::cout << e.what();
		}
	}
	return 0;
}