/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:52:57 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/18 16:54:44 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// BASIC CONSTRUCTORS AND DESTRUCTORS

Fixed::Fixed(void) {
	_value = 0;
	return ;
}

Fixed::Fixed(const Fixed &other) {
    _value = other._value;
	return ;
}

Fixed::Fixed(int const value) {
    _value = value << _kPrecision;
}

Fixed::Fixed(float const value) {
    _value = roundf(value * (1 << _kPrecision));
}

Fixed::~Fixed(void) {
	return ;
}

// OVERLOADS CONSTRUCTORS

Fixed& Fixed::operator=(const Fixed &other) {
    if (this != &other) {
        _value = other._value;
    }
    return *this;
}

// OVERLOADS ARITHMETIC

Fixed Fixed::operator+(const Fixed &other) {
    return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) {
    return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) {
    return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) {
    return (this->toFloat() / other.toFloat());
}

// OVERLOADS INCREMENTATIONS || DECREMENTATIONS

Fixed Fixed::operator++(void)
{
	Fixed tmp;
	tmp._value = ++_value;
	return (tmp);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;
	tmp._value = _value++;
	return (tmp);
}

Fixed Fixed::operator--(void)
{
	Fixed tmp;
	tmp._value = --_value;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;
	tmp._value = _value--;
	return (tmp);
}

// COMPARAISONS

bool Fixed::operator>(const Fixed &other) const {
	if (this->toFloat() > other.toFloat())
		return (1);
	return (0);
}

bool Fixed::operator>=(const Fixed &other) const {
	if (this->toFloat() >= other.toFloat())
		return (1);
	return (0);
}

bool Fixed::operator<(const Fixed &other) const {
	if (this->toFloat() < other.toFloat())
		return (1);
	return (0);
}

bool Fixed::operator<=(const Fixed &other) const {
	if (this->toFloat() <= other.toFloat())
		return (1);
	return (0);
}

bool Fixed::operator==(const Fixed &other) const {
	if (this->toFloat() == other.toFloat())
		return (1);
	return (0);
}

bool Fixed::operator!=(const Fixed &other) const {
	if (this->toFloat() != other.toFloat())
		return (1);
	return (0);
}

// OVERLOADS MAX // MIN

Fixed Fixed::max(Fixed &a, Fixed &b){
	if (a > b)
		return (a);
	return (b);
}

Fixed Fixed::max(Fixed const &a, Fixed const &b){
	if (a > b)
		return (a);
	return (b);
}

Fixed Fixed::min(Fixed &a, Fixed &b){
	if (a < b)
		return (a);
	return (b);
}

Fixed Fixed::min(Fixed const &a, Fixed const &b){
	if (a < b)
		return (a);
	return (b);
}

// MEMBER FUNCTIONS

int Fixed::getRawBits() const {
	return _value;
}

void Fixed::setRawBits(int const raw) {
    _value = raw;
}

float Fixed::toFloat() const {
    return (float)_value / (1 << _kPrecision);
}

int Fixed::toInt() const {
    return _value >> _kPrecision;
}

// OVERLOAD OSTREAM TO DISPLAY VALUE

std::ostream& operator<<(std::ostream &out, Fixed const &fixed) {
    out << fixed.toFloat();
    return out;
}
