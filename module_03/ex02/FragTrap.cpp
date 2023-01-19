/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:15:45 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 12:19:00 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    this->_name = "default";
    this->_hit = 100;
    this->_energy = 100;
    this->_attack = 30;
    std::cout << "FragTrap " << this->_name << "has been created" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name) {
    this->_name = name;
    this->_hit = 100;
    this->_energy = 100;
    this->_attack = 30;
    std::cout << "FragTrap " << this->_name << " has been created" << std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other) {
    std::cout << "FragTrap " << this->_name << "has been created" << std::endl;
    this->_name = other._name;
    this->_hit = other._hit;
    this->_energy = other._energy;
    this->_attack = other._attack;
    return ;
}

FragTrap & FragTrap::operator=(FragTrap const &other) {
    _name = other._name;
    _hit = other._hit;
    _energy = other._energy;
    _attack = other._attack;
    std::cout << "FragTrap " << this->_name << "has been created" << std::endl;
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->_name << "has been destroyed" << std::endl;
    return ;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->_name << " ask for High Fives !" << std::endl;
}