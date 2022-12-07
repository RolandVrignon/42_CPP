/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:29:31 by rvrignon          #+#    #+#             */
/*   Updated: 2022/12/07 17:54:09 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( void ) {
	std::cout << "A new Zombie is born !" << std::endl;
}

Zombie::~Zombie ( void ) {
	std::cout << "A Zombie died !" << std::endl;
}

void Zombie::setName (std::string name) {
	this->_name = name;
}

std::string Zombie::getName (void) {
	return (this->_name);
}

void Zombie::announce (void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

