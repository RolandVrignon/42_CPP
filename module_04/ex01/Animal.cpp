/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:20:17 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 17:36:37 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
    std::cout << "New Animal has been created" << std::endl;
    return ;
}

Animal::Animal(Animal const &other) {
    std::cout << "New Animal has been created" << std::endl;
    _type = other._type;
    return ;
}

Animal & Animal::operator=(Animal const &other) {
    std::cout << "New Animal has been created" << std::endl;
    _type = other._type;
    return (*this);
}

Animal::~Animal(void) {
    std::cout << "Animal has been destroyed" << std::endl;
    return ;
}

std::string Animal::makeSound(void) const {
    return "Cui Cui ?";
}

void Animal::setType(std::string type) {
    this->_type = type;
    return ;
}

std::string Animal::getType(void) const {
    return this->_type;
}