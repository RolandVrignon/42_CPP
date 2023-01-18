/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:11:13 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/18 21:31:29 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap has been created" << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other) {
    std::cout << "ScavTrap has been created" << std::endl;
    this->_name = other._name;
    this->_hit = other._hit;
    this->_energy = other._energy;
    this->_attack = other._attack;
    return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &other) {
    _name = other._name;
    _hit = other._hit;
    _energy = other._energy;
    _attack = other._attack;
    std::cout << "ScavTrap has been created" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap has been destroyed" << std::endl;
    return ;
}

void ScavTrap::guardGate(void) {
    std::cout << "ScavTrap entered in Gate Keeper mode !" << std::endl;
}