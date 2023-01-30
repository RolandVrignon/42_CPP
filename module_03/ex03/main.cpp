/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:23:48 by rvrignon            #+#    #+#             */
/*   Updated: 2023/01/18 20:24:33 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main (void) {
    ClapTrap Test;
    std::cout << std::endl;
    DiamondTrap apple("Apple");
    std::cout << std::endl;
    DiamondTrap windows("Windows");

    std::cout << std::endl;

    apple.attack("Mauricio");
    apple.takeDamage(20);
    apple.beRepaired(10);
    windows.attack("Jules");
    windows.attack("Victoria");
    windows.attack("Neymar");
    windows.attack("Mbappe");
    windows.attack("Messi");
    windows.takeDamage(2);
    windows.beRepaired(10);
    windows.guardGate();
    apple.highFivesGuys();
    apple.whoAmI();

    std::cout << std::endl;
}