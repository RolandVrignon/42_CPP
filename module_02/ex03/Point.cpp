/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:15:48 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/18 18:57:03 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
	return ;
}

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y){
	return ;
}

Point::~Point(void) {
	return ;
}

Point::Point(const Point &other) {
	_x = other._x;
	_y = other._y;
	return ;
}

Point& Point::operator=(const Point &other)
{
	if (this != &other) {
		_x = other._x;
		_y = other._y;
    }
    return *this;
}

Fixed Point::get_x(void) const {
	return (this->_x);
}

Fixed Point::get_y(void) const {
	return (this->_y);
}