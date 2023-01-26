/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:06:40 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/26 19:19:09 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) {
    this->_array = new T[0];
    this->_size = 0;
    std::cout << "Empty default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) {
    this->_array = new T[n];
    this->_size = n;
    std::cout << "Filled default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(Array const &other) {
    this->_array = new T[other._size];
    this->_size = other._size;
    for (unsigned int i = 0; i < other._size; i++) {
        this->_array[i] = other._array[i];
    }
    std::cout << "Assignement constructor called" << std::endl;
}

template <typename T>
Array<T>& Array<T>::operator=(Array const &other) {
    std::cout << "Overload constructor called" << std::endl;
    delete [] this->_array;
    this->_size = other._size;
    this->_array = new T[this->_size];
    for (unsigned int i = 0; i < other._size; i++) {
        this->_array[i] = other._array[i];
    }
    return (*this);
}

template <typename T>
T& Array<T>::operator[](const unsigned int &index) {
    if (index < this->getSize())
        return(this->_array[index]);      
    throw (Array<T>::indexException());
}

template <typename T>
Array<T>::~Array() {
    delete [] this->_array;
    std::cout << "Default destructor called" << std::endl;
}

template <typename T>
unsigned int Array<T>::getSize() const {
    return this->_size;
}