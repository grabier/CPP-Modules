/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MuntantStack.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:32:48 by gmontoro          #+#    #+#             */
/*   Updated: 2025/05/31 19:04:43 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>

template<typename T>
class MutantStack: public std::stack<T>{
	public:
		MutantStack(): std::stack<T>(){
			std::cout << "MutantStack constructor called" << std::endl;
		}
		MutantStack(MutantStack & other){
			*this = other;
		}
		~MutantStack(){
			std::cout << "MutantStack destructor called" << std::endl;
		}
		MutantStack &operator=(const MutantStack &other){
			if (*this != other){
				*this = other;
				return (*this);
			}
			else
				return (*this);
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(){
			return (this->c.begin());
		}
		iterator end(){
			return (this->c.end());
		}
};