/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:01:33 by rvrignon          #+#    #+#             */
/*   Updated: 2022/12/07 18:01:35 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( void ) {
	std::cout << "A new Zombie is born !" << std::endl;
}

Zombie::~Zombie ( void ) {
	std::cout << this->_name << " died !" << std::endl;
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