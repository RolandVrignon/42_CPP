/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:11:13 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/30 22:17:31 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    this->_name = "default";
    this->_hit = 100;
    this->_energy = 50;
    this->_attack = 20;
    std::cout << "ScavTrap " << this->_name << "has been created" << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string name) {
    this->_name = name;
    this->_hit = 100;
    this->_energy = 50;
    this->_attack = 20;
    std::cout << "ScavTrap " << this->_name << " has been created" << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other) {
    std::cout << "ScavTrap " << this->_name << "has been created" << std::endl;
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
    std::cout << "ScavTrap " << this->_name << "has been created" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->_name << "has been destroyed" << std::endl;
    return ;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energy <= 0)
    {
        std::cout << "ScavTrap " << this->_name << "has no energy left !" << std::endl;
        return ;
    }
    if (this->_hit <= 0)
    {
        std::cout << "ScavTrap " << this->_name << "is dead !" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage !" << std::endl;
    this->_energy -= 1;
    return ;
}

void ScavTrap::guardGate(void) {
    if (this->_hit <= 0) {
        std::cout << "ScavTrap " << this->_name << "is dead !" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " entered in Gate Keeper mode !" << std::endl;
    return ;
}