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

#include "ClapTrap.hpp"

int main (void) {
    ClapTrap robinson("Robinson", 30, 10, 5);
    ClapTrap dyson("Dyson", 15, 5, 2);

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

}