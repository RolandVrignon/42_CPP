/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:52:57 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/18 14:54:48 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	_value = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &other) {
    _value = other._value;
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed& Fixed::operator=(const Fixed &other) {
    if (this != &other) {
        _value = other._value;
    }
	std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Fixed::Fixed(int const value) {
	std::cout << "Int constructor called" << std::endl;
    _value = value << _kPrecision;
}

Fixed::Fixed(float const value) {
	std::cout << "Float constructor called" << std::endl;
    _value = roundf(value * (1 << _kPrecision));
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}

float Fixed::toFloat() const {
    return (float)_value / (1 << _kPrecision);
}

int Fixed::toInt() const {
    return _value >> _kPrecision;
}

std::ostream& operator<<(std::ostream &out, Fixed const &fixed) {
    out << fixed.toFloat();
    return out;
}
