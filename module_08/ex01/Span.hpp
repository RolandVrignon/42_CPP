/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:35:41 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/28 16:01:35 by rvrignon         ###   ########.fr       */
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
        void    addNumber();
        class vectorFull {
            public : 
                void error () {
                    std::cout << "Too many numbers added" << std::endl;
                }
        };
    private :
        std::vector<int>    _vector;
        unsigned int        _max;
};

#endif