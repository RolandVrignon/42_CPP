/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:37:40 by rvrignon          #+#    #+#             */
/*   Updated: 2023/02/02 16:25:12 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _max(5), _container(5) {
    std::vector<int> test(5, 0);
    this->_vector = test;
    return ;
}

Span::Span(unsigned int x) : _max(x), _container(x) {
    std::vector<int> test(x, 0);
    this->_vector = test;
    return ;
}

Span::Span(Span const &other) : _vector(other._vector), _max(other._max), _container(other._container) {
    return ;
}

Span& Span::operator=(Span const &other) {
    this->_max = other._max;
    this->_container = other._container;
    this->_vector = other._vector;
    return (*this);
}

Span::~Span() {
    return ;
}

void Span::addNumber(int x) {
    try {
        if (this->_max > 0) {
            this->_vector[this->_container - this->_max] = x;
            this->_max--;   
        } else
            throw Span::vectorException();
    } catch (Span::vectorException &e) {
        e.tooManyNumbers();
    }
}

int Span::shortestSpan(void) const {
    try {
        if (this->_vector.size() <= 1) {
            throw Span::vectorException();
        } else {
            std::vector<int> copy = _vector;
            std::sort(copy.begin(), copy.end());
            int min_span = copy[1] - copy[0];
            for (long unsigned int i = 1; i < copy.size() - 1; i++) {
                int span = copy[i + 1] - copy[i];
                if (span < min_span)
                    min_span = span;
            }
            return min_span;
        }
    } catch (Span::vectorException &e) {
        e.notEnoughNumber();
        return (-1);
    }
}

int Span::longestSpan(void) const {
    try {
        if (this->_vector.size() <= 1) {
            throw Span::vectorException();
        } else {
            std::vector<int> copy = _vector;
            std::sort(copy.begin(), copy.end());
            int max_span = copy[copy.size() - 1] - copy[0];
            return max_span;
        }
    } catch (Span::vectorException &e) {
        e.notEnoughNumber();
        return (-1);
    }
}

void Span::display() const {
    long unsigned int i;
    std::vector<int> copy = _vector;   
    std::cout << "Span = {";
    for (i = 0; i < copy.size() - 1; i++) {
        std::cout << copy[i] << ",";
    }
    std::cout << copy[i] << "}" << std::endl;
}

void Span::iteratorRange(unsigned int range) {
    for (std::vector<int>::iterator it = this->_vector.begin(); it != this->_vector.end(); ++it)
        *it = (rand() % range) + 1;
}