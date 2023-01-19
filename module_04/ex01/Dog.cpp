/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:08:56 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 17:38:52 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _brain(new Brain()) {
    std::cout << "New Dog created by default" << std::endl;
    this->setType("DOG");
    return ;
}

Dog::Dog(Dog const &other) : Animal() {
    this->setType(other.getType());
    this->_brain = new Brain(other._brain);
    std::cout << "New Dog created by copy" << std::endl;
    return ;
}

Dog & Dog::operator=(Dog const &other) {
    this->setType(other.getType());
    if (this->_brain)
        delete _brain;
    this->_brain = new Brain(other._brain);
    std::cout << "New Dog created by overload" << std::endl;
    return (*this);
}

Dog::~Dog(void) {
    delete _brain;
    std::cout << "Dog destroyed, goodbye my lover" << std::endl;
    return ;
}

std::string Dog::makeSound(void) const {
    return "Dog says : Woufff Wouf";
}

std::string Dog::getIdea(int nb) const {
    return _brain->getIdea(nb);
}

void Dog::setIdea(std::string idea, int nb) {
    _brain->setIdea(idea, nb);
    return ;
}