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

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void) {
    ClapTrap robinson("Robinson", 30, 10, 5);
    ClapTrap dyson("Dyson");

    robinson.attack("Mauricio");
    robinson.takeDamage(20);
    robinson.beRepaired(10);
    dyson.attack("Jules");
    dyson.attack("Victoria");
    dyson.attack("Neymar");
    dyson.attack("Mbappe");
    dyson.attack("Messi");
    dyson.takeDamage(2);
    dyson.beRepaired(10);

    std::cout << std::endl;

    ScavTrap roland("Roland");
    ScavTrap pogba("Pogba");

    std::cout << std::endl;

    roland.attack("Mauricio");
    roland.takeDamage(20);
    roland.beRepaired(10);
    pogba.attack("Jules");
    pogba.attack("Victoria");
    pogba.attack("Neymar");
    pogba.attack("Mbappe");
    pogba.attack("Messi");
    pogba.takeDamage(2);
    pogba.beRepaired(10);
    pogba.guardGate();
    roland.guardGate();

    std::cout << std::endl;

    FragTrap pavard("Pavard");
    FragTrap dembele("Dembele");

    std::cout << std::endl;

    pavard.attack("Mauricio");
    pavard.takeDamage(20);
    pavard.beRepaired(10);
    dembele.attack("Jules");
    dembele.attack("Victoria");
    dembele.attack("Neymar");
    dembele.attack("Mbappe");
    dembele.attack("Messi");
    dembele.takeDamage(2);
    dembele.beRepaired(10);
    dembele.highFivesGuys();
    pavard.highFivesGuys();

    std::cout << std::endl;

}