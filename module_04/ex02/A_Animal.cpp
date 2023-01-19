/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:07:26 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 18:12:51 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

A_Animal::A_Animal(void) {
    std::cout << "New A_Animal has been created" << std::endl;
    return ;
}

A_Animal::A_Animal(A_Animal const &other) {
    std::cout << "New A_Animal has been created" << std::endl;
    _type = other._type;
    return ;
}

A_Animal & A_Animal::operator=(A_Animal const &other) {
    std::cout << "New A_Animal has been created" << std::endl;
    _type = other._type;
    return (*this);
}

A_Animal::~A_Animal(void) {
    std::cout << "A_Animal has been destroyed" << std::endl;
    return ;
}

std::string A_Animal::makeSound(void) const {
    return "Cui Cui ?";
}

void A_Animal::setType(std::string type) {
    this->_type = type;
    return ;
}

std::string A_Animal::getType(void) const {
    return this->_type;
}