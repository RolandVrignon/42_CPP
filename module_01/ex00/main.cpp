/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:29:44 by rvrignon          #+#    #+#             */
/*   Updated: 2022/12/07 17:54:25 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie *new_Zombie;

	new_Zombie = newZombie("Heap");
	std::cout << "Zombie on heap is named " << new_Zombie->getName() << std::endl;
	randomChump("Stack");
	new_Zombie->announce();
	delete new_Zombie;
	return (0);
}