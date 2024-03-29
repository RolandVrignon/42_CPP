/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:36:42 by rvrignon          #+#    #+#             */
/*   Updated: 2023/02/02 15:41:24 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <exception>

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {
    public :
        Array();
        Array(unsigned int n);
        Array(Array const &other);
        Array &operator=(Array const &other);
        T &operator[](const unsigned int &index);
        T const operator[](const unsigned int &index) const;
        ~Array();
        unsigned int getSize() const;
        class indexException : public std::exception {
            public :
                virtual const char * what() const throw() {
                    return ("Bad index");
                }
        };
    private :
        T               *_array;
        unsigned int    _size;
};

#endif 