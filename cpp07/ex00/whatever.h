/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:39:55 by gmontoro          #+#    #+#             */
/*   Updated: 2025/04/23 19:50:27 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
T max(T a, T b){
	if (a > b)
		return (a);
	return (b);
}

template<typename T>
T min(T a, T b){
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
void swap(T &a, T &b){
	T aux;
	aux = a;
	a = b;
	b = aux;
}