/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 09:33:44 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/13 15:43:13 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	
	Dog uno;
	Dog temp;
	temp = uno;
	/* {
		Dog temp = uno;
	} */

	/* Animal* j = new Dog();
	const Animal* i = new Cat();

	//testing deep copy
	Dog *copy;
	{
		Dog *org = NULL;
		copy = org;
	}
	
	const Animal *arr[10];
	for(int i= 0;i < 5; i++){
		arr[i] = new Dog();
	}
	for(int i= 5;i < 10; i++){
		arr[i] = new Cat();
	}

	for(int i= 0;i < 5; i++){
		std::cout << "type of animal[" << i << "]: " << arr[i]->getType() << std::endl;
		arr[i]->makeSound();
	}
	for(int i= 5;i < 10; i++){
		std::cout << "type of animal[" << i << "]: " << arr[i]->getType() << std::endl;
		arr[i]->makeSound();
	}
	for (int i = 0; i < 10; i++){
		delete arr[i];
	}
	delete i;
	delete j; */

	return 0;
}
