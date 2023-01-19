/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:24:44 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 12:19:34 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("ScavTrap"),_hit(0), _energy(0), _attack(0) {
    std::cout << "Claptrap has been created" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name),_hit(10), _energy(10), _attack(0) {
    std::cout << "Claptrap " << this->_name << " has been created" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name, int hit, int energy, int attack) : _name(name),_hit(hit), _energy(energy), _attack(attack) {
    std::cout << "Claptrap " << this->_name << " has been created" << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const &other){
    std::cout << "Claptrap " << this->_name << "has been created" << std::endl;
    _name = other._name;
    _hit = other._hit;
    _energy = other._energy;
    _attack = other._attack;
    return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &other) {
    std::cout << "Claptrap " << this->_name << "has been created" << std::endl;
    this->_name = other._name;
    this->_hit = other._hit;
    this->_energy = other._energy;
    this->_attack = other._attack;
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "Claptrap " << this->_name << " has been destroyed" << std::endl;
    return ;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energy <= 0)
    {
        std::cout << "ClapTrap " << this->_name << "has no energy left !" << std::endl;
        return ;
    }
    if (this->_hit <= 0)
    {
        std::cout << "ClapTrap " << this->_name << "is dead !" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage !" << std::endl;
    this->_energy -= 1;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energy <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " has no energy left !" << std::endl;
        return ;
    }
    if (this->_hit <= 0)
    {
        std::cout << "ClapTrap " << this->_name << "is dead !" << std::endl;
        return ;
    }
    this->_hit += amount;
    this->_energy -= 1;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount) {  
    this->_hit -= amount;
    std::cout << "ClapTrap " << this->_name << " suffered " << amount << " points of damage, he has " << this->_hit << " points left !" << std::endl;
    return ;
}