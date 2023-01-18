/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:52:30 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/18 19:49:20 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
	// Point a l'interieur
	std::cout << "Point a l'interieur :" << std::endl;
	Point a1(-5, 0);
	Point b1(5, 0);
	Point c1(0, 5);
	Point point1(1, 1);

	if (bsp(a1,b1,c1,point1))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	// Point a l'exterieur
	std::cout << "Point a l'exterieur :" << std::endl;
	Point a2(-5, 0);
	Point b2(5, 0);
	Point c2(0, 5);
	Point point2(0, -1);

	if (bsp(a2,b2,c2,point2))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	// Point sur un segment
	std::cout << "Point sur un segment :" << std::endl;
	Point a3(-5, 0);
	Point b3(5, 0);
	Point c3(0, 5);
	Point point3(1, 0);

	if (bsp(a3,b3,c3,point3))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
	
	return (0);
}