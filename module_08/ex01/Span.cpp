/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:37:40 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/31 14:16:16 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _max(5) {
    return ;
}

Span::Span(unsigned int x) : _max(x) {
    return ;
}

Span::Span(Span const &other) : _vector(other._vector), _max(other._max) {
    return ;
}

Span& Span::operator=(Span const &other) {
    this->_max = other._max;
    this->_vector = other._vector;
    return (*this);
}

Span::~Span() {
    return ;
}

void Span::addNumber(int x) {
    try {
        if (this->_max > 0) {
            this->_vector.push_back(x);
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
    std::vector<int> copy = _vector;   
    std::cout << "Span = {";
    for (long unsigned int i = 0; i < copy.size(); i++) {
        std::cout << copy[i] << ",";
    }
    std::cout << "}" << std::endl;
}