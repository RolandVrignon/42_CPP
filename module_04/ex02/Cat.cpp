/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:32:23 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 18:13:54 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _brain(new Brain()) {
    std::cout << "New Cat created by default" << std::endl;
    this->setType("CAT");
    return ;
}

Cat::Cat(Cat const &other) : A_Animal() {
    std::cout << "New Cat created by copy" << std::endl;
    this->setType(other.getType());
    this->_brain = new Brain(other._brain);
    return ;
}

Cat & Cat::operator=(Cat const &other) {
    this->setType(other.getType());
    if (this->_brain)
        delete _brain;
    this->_brain = new Brain(other._brain);
    std::cout << "New Cat created by overload" << std::endl;
    return (*this);
}

Cat::~Cat(void) {
    delete _brain;
    std::cout << "Cat destroyed, goodbye my lover" << std::endl;
    return ;
}

std::string Cat::makeSound(void) const {
    return "Cat says : Miaou Miaouuuu";
}

std::string Cat::getIdea(int nb) const {
    return _brain->getIdea(nb);
}

void    Cat::setIdea(std::string idea, int nb) {
    _brain->setIdea(idea, nb);
    return ;
}