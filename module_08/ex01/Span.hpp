/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:35:41 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/31 14:13:11 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#ifndef SPAN_HPP
# define SPAN_HPP

class Span {
    public : 
        Span();
        Span(unsigned int x);
        Span(Span const &other);
        Span &operator=(Span const &other);
        ~Span();
        void    addNumber(int x);
        class vectorException {
            public : 
                void tooManyNumbers () {
                    std::cout << "Too many numbers added" << std::endl;
                }
                void notEnoughNumber () {
                    std::cout << "Not enough numbers to find either shortest span or longest span. Default return : ";
                }
        };
        int shortestSpan() const;
        int longestSpan() const;
        void display() const;
    private :
        std::vector<int>    _vector;
        unsigned int        _max;
};

#endif