/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:40:15 by gmontoro          #+#    #+#             */
/*   Updated: 2025/10/05 15:25:54 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.h"

/* class Awesome
{
	public:
	Awesome(void) : _n(0){}
	Awesome(int n) : _n(n){}
	Awesome & operator=(Awesome & a){_n = a._n; return *this; }
	bool operator ==(Awesome const & rhs) const {return (this->_n == rhs._n);}
	bool operator !=(Awesome const & rhs) const {return (this->_n != rhs._n);}
	bool operator >(Awesome const & rhs) const {return (this->_n > rhs._n);}
	bool operator <(Awesome const & rhs) const {return (this->_n < rhs._n);}
	bool operator >=(Awesome const & rhs) const {return (this->_n >= rhs._n);}
	bool operator <=(Awesome const & rhs) const {return (this->_n <= rhs._n);}
	int	get_n() const {return _n;}
	private:
		int _n;
};
std::ostream & operator<<(std::ostream & o, const Awesome &a){ o << a.get_n(); return o;}

int main(void){
	Awesome a(2), b(4);
	swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	return (0);
} */


/* int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
} */

int main(void){
	int i1 = 9;
	int i2 = 75;
	
	char c1 = 'K';
	char c2 = '*';
	
	float f1 = 8.5;
	float f2 = -4.5;
	
	std::string s1 = "chaine1";
	std::string s2 = "chaine2";
	
	std::cout <<"max int is: " <<  ::max(i1, i2) << std::endl;
	std::cout <<"max char is: " <<  ::max(c1, c2) << std::endl;
	std::cout <<"max float is: " <<  ::max(f1, f2) << std::endl;
	std::cout <<"max string is: " <<  ::max(s1, s2) << std::endl << std::endl;

	std::cout <<"min int is: " <<  ::min(i1, i2) << std::endl;
	std::cout <<"min char is: " <<  ::min(c1, c2) << std::endl;
	std::cout <<"min float is: " <<  ::min(f1, f2) << std::endl;
	std::cout <<"min string is: " <<  ::min(s1, s2) << std::endl << std::endl;
	
	std::cout << "Before swap: i1 = " << i1 << " i2 = " << i2 << std::endl;
	::swap(i1, i2);
	std::cout << "After swap: i1 = " << i1 << " i2 = " << i2 << std::endl << std::endl;

	std::cout << "Before swap: f1 = " << f1 << " f2 = " << f2 << std::endl;
	::swap(f1, f2);
	std::cout << "After swap: f1 = " << f1 << " f2 = " << f2 << std::endl << std::endl;

	std::cout << "Before swap: c1 = " << c1 << " c2 = " << c2 << std::endl;
	::swap(c1, c2);
	std::cout << "After swap: c1 = " << c1 << " c2 = " << c2 << std::endl << std::endl;

	std::cout << "Before swap: s1 = " << s1 << " s2 = " << s2 << std::endl;
	::swap(s1, s2);
	std::cout << "After swap: s1 = " << s1 << " s2 = " << s2 << std::endl;
	
	return (0);
}