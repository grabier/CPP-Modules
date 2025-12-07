/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:32:48 by gmontoro          #+#    #+#             */
/*   Updated: 2025/05/31 18:53:01 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Span{
	private:
		int *arr;
		unsigned int size;
		unsigned int current_size;
	public:
		Span(unsigned int);
		Span(const Span &);
		~Span();
		Span &operator=(const Span &);
		void addNumber(int n);
		void addMultipleNumbers(int);
		int shortestSpan();
		int longestSpan();
		class FullException : public std::exception{
			public:
				const char *what() const throw();
		};
		
};