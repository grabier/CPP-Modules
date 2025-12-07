/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 16:04:54 by gmontoro          #+#    #+#             */
/*   Updated: 2025/10/06 18:33:32 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <limits.h>
#include <time.h>
#include <cstdlib>
#include <math.h>

Span::Span(unsigned int N){
	std::cout << "Span: unsigned int constructor called for size " << N << std::endl;
	size = N;
	current_size = 0;
	arr = new int[size];
}

Span::Span(const Span &other){
	size = other.size;
	current_size = other.current_size;
	arr = new int[size];
	for (unsigned int i = 0; i < size ; i++){
		arr[i] = other.arr[i];
	}
}

Span::~Span(){
	std::cout << "Span destructor called" << std::endl;
	delete[] arr;
}

Span &Span::operator=(const Span &other){
	if (this != &other)
		return (*this);
	else{
		size = other.size;
		delete[] arr;
		arr = new int[size];
		for (unsigned int i = 0; i < size ; i++){
			arr[i] = other.arr[i];
		}
	}
	return (*this);
}

void Span::addNumber(int n){
	if (current_size == size){
		throw(FullException());
	}
	else{
		arr[current_size] = n;
		current_size++;
	}
}

void Span::addMultipleNumbers(int n){
	srand(time(0));
	for (int i = 0; i < n; i++){
		if (current_size == size){
			throw(FullException());
		}
		else{
			arr[current_size] = rand() % INT_MAX;
			if (rand() % 100 > 50)
				arr[current_size] *= -1;
			current_size++;
		}
	}
}

int Span::longestSpan(){
	int dist = 0;
	for (unsigned int i = 1; i < current_size; i++){
		if (arr[i] - arr[i - 1] > dist)
			dist = arr[i] - arr[i - 1];
	}
	if (dist != 0)
		return (dist);
	else
		return (-1);
}

int Span::shortestSpan(){
	int dist = INT_MAX;
	for (unsigned int i = 1; i < current_size; i++){
		if (abs(arr[i] - arr[i - 1]) < dist)
			dist = abs(arr[i] - arr[i - 1]);
	}
	if (dist != INT_MAX)
		return (dist);
	else
		return (-1);
}


const char *Span::FullException::what()const throw(){
	return ("Exception: Array is full \n");
}