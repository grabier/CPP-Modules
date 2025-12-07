/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:59:48 by gmontoro          #+#    #+#             */
/*   Updated: 2025/10/05 11:41:47 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


template<typename T, typename F>
void iter(T (&a), int L, void (*f)(F)){
	for (int i = 0; i < L; i++){
		f(a[i]);
	}
}

template<typename T>
void decrement(T a){
	a--;
}

template<typename T>
T max(T a, T b){
	if (b > a)
		return (b);
	return (a);
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


