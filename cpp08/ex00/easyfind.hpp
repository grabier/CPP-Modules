/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:32:48 by gmontoro          #+#    #+#             */
/*   Updated: 2025/05/31 13:37:53 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <algorithm>

class NotFoundException: public std::exception{
	const char *what() const throw(){return ("Not found\n");}
};

template<typename T>
typename T::iterator easyfind(T &cont, int val){
	typename T::iterator it = std::find(cont.begin(), cont.end(), val);
	if (it == cont.end())
		throw(NotFoundException());
	else{
		std::cout << "Found value " << val << std::endl;
		return (it);
	}
}