/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:32:23 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 15:17:25 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "New Cat created by default" << std::endl;
    this->setType("CAT");
    return ;
}

Cat::Cat(Cat const &other) : Animal() {
    std::cout << "New Cat created by copy" << std::endl;
    this->setType(other.getType());
    return ;
}

Cat & Cat::operator=(Cat const &other) {
    std::cout << "New Cat created by overload" << std::endl;
    this->setType(other.getType());
    return (*this);
}

Cat::~Cat(void) {
    std::cout << "Cat destroyed, goodbye my lover" << std::endl;
    return ;
}

void Cat::makeSound(void) const {
    std::cout << "Miaou Miaouuuu" << std::endl;
    return ;
}