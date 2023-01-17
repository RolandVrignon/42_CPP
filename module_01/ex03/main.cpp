/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:49:23 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/17 19:35:17 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	HumanB jim("Jim");
	jim.setWeapon(club);
	bob.attack();
	jim.attack();
	club.setType("some other type of club");
	bob.attack();
	jim.attack();
	club.setType("A machine gun");
	bob.attack();
	jim.attack();
	return 0;
}