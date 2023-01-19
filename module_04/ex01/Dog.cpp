/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:08:56 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 15:17:42 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "New Dog created by default" << std::endl;
    this->setType("DOG");
    return ;
}

Dog::Dog(Dog const &other) : Animal() {
    std::cout << "New Dog created by copy" << std::endl;
    this->setType(other.getType());
    return ;
}

Dog & Dog::operator=(Dog const &other) {
    std::cout << "New Dog created by overload" << std::endl;
    this->setType(other.getType());
    return (*this);
}

Dog::~Dog(void) {
    std::cout << "Dog destroyed, goodbye my lover" << std::endl;
    return ;
}

void Dog::makeSound(void) const {
    std::cout << "Wouuff Wouf" << std::endl;
    return ;
}