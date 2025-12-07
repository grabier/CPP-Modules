/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:36:18 by gmontoro          #+#    #+#             */
/*   Updated: 2025/10/05 17:07:19 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <cstdlib>

int main(void){

	Array<std::string> a((unsigned int)4);
	std::string s = "cagoendios";
	a.setArr(s, 0);
	s = "mesanolvidao";
	a.setArr(s, 1);
	s = "los macarrrones";
	a.setArr(s, 2);
	s = "fak";
	a.setArr(s, 3);
	try
	{
		s = "last";
		a.setArr(s, 4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "a[0]: " << a[0] << std::endl;
	std::cout << "a[1]: " << a[1] << std::endl;
	std::cout << "a[2]: " << a[2] << std::endl;
	std::cout << "a[3]: " << a[3] << std::endl;
	try
	{
		std::cout << "a[4]: " << a[4] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	{
		std::cout << "scope 1\n";
		Array<std::string> b = a;
	}
	return (0);
}


/* #define MAX_VAL 750
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}
	
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;
	return 0;
} */