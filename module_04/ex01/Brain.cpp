/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:55:23 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 17:24:31 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Defaut Brain constructor" << std::endl;
    return ;
}

Brain::Brain(Brain const &other) {
    std::cout << "Copy Brain constructor" << std::endl;
    for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
    return;
}

Brain::Brain(Brain *other) {
    std::cout << "Copy Brain constructor" << std::endl;
    for (int i = 0; i < 100; i++)
		this->_ideas[i] = other->_ideas[i];
    return;
}

Brain & Brain::operator=(Brain const &other) {
    std::cout << "Overload Brain constructor" << std::endl;
    for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
    return (*this);
}

Brain::~Brain() {
    std::cout << "Default Brain destructor" << std::endl;
}

std::string Brain::getIdea(int nb) const {
    if (nb < 1 || nb > 100) {
        return ("Not valid input for my poor brain");
    }
    for (int i = 1; i < 101; i++) {
        if (i == nb)
            return _ideas[i - 1];
    }
    return (NULL);
}

void Brain::setIdea(std::string idea, int nb) {
    if (nb < 1 || nb > 100) {
        std::cout << "Not valid input for my poor brain" << std::endl;
        return ;
    }
    for (int i = 1; i < 101; i++) {
        if (i == nb)
            _ideas[i - 1] = idea;
    }
}