/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:15:42 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 15:15:44 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
    std::cout << "New WrongAnimal has been created" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other) {
    std::cout << "New WrongAnimal has been created" << std::endl;
    _type = other._type;
    return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &other) {
    std::cout << "New WrongAnimal has been created" << std::endl;
    _type = other._type;
    return (*this);
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal has been destroyed" << std::endl;
    return ;
}

void WrongAnimal::makeSound(void) const {
    std::cout << "Cui Cui ??" << std::endl;
    return ;
}

void WrongAnimal::setType(std::string type) {
    this->_type = type;
    return ;
}

std::string WrongAnimal::getType(void) const {
    return this->_type;
}