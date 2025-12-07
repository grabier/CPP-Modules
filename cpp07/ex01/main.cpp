/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:59:19 by gmontoro          #+#    #+#             */
/*   Updated: 2025/10/05 15:32:03 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.h"

/* class Awesome
{
	public:
	Awesome(void) : _n(42){return ;}
	int get(void) const {return this->_n; }
	private:
		int _n;
};
std::ostream & operator<<(std::ostream & o, const Awesome &a){ o << a.get(); return o;}

template< typename T>
void print( T& x){
	std::cout << x << std::endl;
	return ;
}

int main(void){
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	const int len =  5;
	iter(tab, len, print<const int>);
	iter(tab2, len, print<Awesome>);
	return (0);
} */

template<typename T>
void show(T const a) {
	std::cout << a << std::endl;
}

void f(int i){
	std::cout << "i: " << i << std::endl;
}

int main(void){
	
	const int iarr[5] = {1, 2, 3, 4, 5};
	iter(iarr, 5, show<int>);
	//show(iarr[0]);
	return (0);
}