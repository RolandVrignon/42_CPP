/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:37:40 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/28 16:00:33 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(5) : _max(5) {
    std::cout << "Default constructor called. Initialized to 5 by default" << std::endl;
}

Span::Span(unsigned int x) : _max(x) {
    std::cout << "Default constructor called" << std::endl;
}

Span::Span(Span const &other) _max(other.max), _vector(other.vector) {
    std::cout << "Copy constructor called" << std::endl;
}

Span& Span::operator=(Span const &other) {
    this->_max = other._max;
    this->_vector = other._vector;
    return (*this);
}

Span::~Span() {
    std::cout << "Default destructor called" << std::endl;
}

void Span::addNumber(int x) {
    try {
        if (this->_max > 0) {
            this->_vector.push_back(x);
            this->_max--;   
        } else
            throw Span::vectorFull();
    } catch (Span::vectorFull &e) {
        e.error();
    }
}