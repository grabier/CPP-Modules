/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontoro <gmontoro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 09:40:21 by gmontoro          #+#    #+#             */
/*   Updated: 2025/03/31 13:46:42 by gmontoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed{
	private:
		int fixed;
		static const int fbits = 8;

	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed(const int);
		Fixed(const float);
		~Fixed();
		void operator=(const Fixed &other);
		bool operator<(const Fixed &other);
		bool operator>(const Fixed &other);
		bool operator<=(const Fixed &other);
		bool operator>=(const Fixed &other);
		bool operator==(const Fixed &other);
		bool operator!=(const Fixed &other);
		Fixed operator+(const Fixed&other);
		Fixed operator-(const Fixed&other);
		Fixed operator*(const Fixed&other);
		Fixed operator/(const Fixed&other);
		Fixed operator++(void);
		Fixed operator++(int);
		Fixed operator--(void);
		Fixed operator--(int);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		static Fixed& max(Fixed &f1, Fixed &f2);
		static Fixed& min(Fixed &f1, Fixed &f2);
		static const Fixed& max(const Fixed &f1, const Fixed &f2);
		static const Fixed& min(const Fixed &f1, const Fixed &f2);
};

std::ostream &operator<<(std::ostream &os, const Fixed &other);