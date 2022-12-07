/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:29:13 by rvrignon          #+#    #+#             */
/*   Updated: 2022/12/07 17:55:51 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump( std::string name ){
	Zombie new_Zombie;
	
	new_Zombie.setName(name);
	std::cout << "Hello ! i'm " << new_Zombie.getName() << std::endl;
	new_Zombie.announce();
	return;
}