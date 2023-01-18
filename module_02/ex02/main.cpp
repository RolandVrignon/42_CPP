/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:52:30 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/18 17:13:16 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{	
	Fixed a;
	Fixed const b( Fixed( 2.25f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl << "LET DO SOME NEW TESTS" << std::endl;
	Fixed c(42);
	std::cout << "we have b = " << b << " and c = " << c << std::endl << std::endl;
	
	std::cout << "Test decrementation postfix (c--): " << c-- << std::endl;
	std::cout << "Test decrementation prefix (--c) : " << --c << std::endl;
	std::cout << "Test incrementation postfix (c++) : " << c++ << std::endl;
	std::cout << "Test incrementation prefix (++c) : " << ++c << std::endl;

	std::cout << "Test additions (b + c) : " << c + b << std::endl;
	std::cout << "Test soustractions (c - b) : " << c - b << std::endl;
	std::cout << "Test multiplication (c * b) : " << c * b << std::endl;
	std::cout << "Test division (c / b) : " << c / b << std::endl;

	std::cout << std::endl << "LET DO COMPARAISONS" << std::endl;

	std::cout << "Is c > b ?" << std::endl;
	if (c > b)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << "Is c >= b ?" << std::endl;
	if (c >= b)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << "Is b > c ?" << std::endl;
	if (b > c)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << "Is c < b ?" << std::endl;
	if (c < b)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << "Is c <= b ?" << std::endl;
	if (c <= b)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << "Is b < c ?" << std::endl;
	if (b < c)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << "Is b <= c ?" << std::endl;
	if (b <= c)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << "Is b == c ?" << std::endl;
	if (b == c)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << "Is b != c ?" << std::endl;
	if (b != c)
		std::cout << "True" << std::endl << std::endl;
	else
		std::cout << "False" << std::endl << std::endl;

	std::cout << "Which is max value in between both values ?" << std::endl << Fixed::max(b, c) << std::endl;
	std::cout << "Which is min value in between both values ?" << std::endl << Fixed::min(b, c) << std::endl;
	
	return (0);
}