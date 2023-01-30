/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:24:41 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/30 21:38:34 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

class ClapTrap {
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(std::string name, int hit, int energy, int attack);
        ClapTrap(const ClapTrap &other);
        ClapTrap &operator=(const ClapTrap &other);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    private:
        std::string _name;
        int         _hit;
        int         _energy;
        int         _attack;
};

#endif