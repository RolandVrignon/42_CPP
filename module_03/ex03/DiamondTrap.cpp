/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:28:26 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 14:11:10 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), _name(ClapTrap::_name + "_clap_name") {
    this->_hit = 100;
    this->_energy = 50;
    this->_attack = 30;
    std::cout << "DiamondTrap " << this->_name << "has been created" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name), _name(ClapTrap::_name + "_clap_name") {
    this->_hit = 100;
    this->_energy = 50;
    this->_attack = 30;
    std::cout << "DiamondTrap name constructor called" << std::endl;
	std::cout << "Stats of DiamondTrap " << _name << std::endl;
	std::cout << "Hit " << this->_hit << " Energy " << this->_energy << " Attack " << this->_attack << std::endl; 
    return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
    std::cout << "DiamondTrap " << this->_name << " has been created" << std::endl;
    this->_name = other._name;
    this->_hit = other._hit;
    this->_energy = other._energy;
    this->_attack = other._attack;
    return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const &other) {
    _name = other._name;
    _hit = other._hit;
    _energy = other._energy;
    _attack = other._attack;
    std::cout << "DiamondTrap " << this->_name << " has been created" << std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << this->_name << " has been destroyed" << std::endl;
    return ;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << _name << " use WhoAmI !" << std::endl;
}

