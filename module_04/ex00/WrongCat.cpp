/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:18:24 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 15:21:44 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "New WrongCat created by default" << std::endl;
    this->setType("CAT");
    return ;
}

WrongCat::WrongCat(WrongCat const &other) : WrongAnimal() {
    std::cout << "New WrongCat created by copy" << std::endl;
    this->setType(other.getType());
    return ;
}

WrongCat & WrongCat::operator=(WrongCat const &other) {
    std::cout << "New WrongCat created by overload" << std::endl;
    this->setType(other.getType());
    return (*this);
}

WrongCat::~WrongCat(void) {
    std::cout << "WrongCat destroyed, goodbye my lover" << std::endl;
    return ;
}

void WrongCat::makeSound(void) const {
    std::cout << "Miaou Miaouuuu" << std::endl;
    return ;
}