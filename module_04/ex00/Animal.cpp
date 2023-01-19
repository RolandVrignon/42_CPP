/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:20:17 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 15:16:51 by rvrignon         ###   ########.fr       */
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

void Animal::makeSound(void) const {
    std::cout << "Cui Cui ??" << std::endl;
    return ;
}

void Animal::setType(std::string type) {
    this->_type = type;
    return ;
}

std::string Animal::getType(void) const {
    return this->_type;
}