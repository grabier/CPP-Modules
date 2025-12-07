/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 09:33:44 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/13 16:38:01 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	
	Cat A;
	A.makeSound();

	{
		Cat temp;
		A = temp;
	}
	
	Dog B;
	B.makeSound();

	{
		Dog temp;
		B = temp;
	}

 	/* AAnimal* animales[100];
	AAnimal** bichardos;
	int i = 0;
	while(i < 50)
	{
		animales[i++] = new Dog();
		std::cout << "Dog nº " << i << std::endl;
	}
	while(i < 100)
	{
		animales[i++] = new Cat();
		std::cout << "Cat nº " << i << std::endl;
	}
	bichardos = animales;
	for(int i = 0; i < 100; i++)
		std::cout << "Nº " << i << " Type: " << animales[i]->getType() << std::endl;
	for(int j = 0; j < 100; j++)
		delete animales[j]; 
	
	Cat OG;
	for(int i = 0; i < 5; i++)
		OG.setIdea("original", i);
	for(int i = 0; i < 5; i++)
		std::cout << OG.getIdea(i) << std::endl;
	Cat copy(OG);
	for(int i = 0; i < 5; i++)
		std::cout << copy.getIdea(i) << std::endl;
	for(int i = 0; i < 5; i++)
		OG.setIdea("Nuevo textacto", i);
	for(int i = 0; i < 5; i++)
		std::cout << OG.getIdea(i) << std::endl;
	for(int i = 0; i < 5; i++)
		std::cout << copy.getIdea(i) << std::endl;
	
	Cat third;

	third = copy;
	for(int i = 0; i < 5; i++)
		std::cout << copy.getIdea(i) << std::endl;
	for(int i = 0; i < 5; i++)
		std::cout << third.getIdea(i) << std::endl; */
	
	return 0;
}
