/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:50:12 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/17 19:33:13 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "Weapon.hpp"

#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB {
	public : 
		HumanB(std::string name);
		void attack(void) const;
		void setWeapon(Weapon &weapon);
	private :
		std::string _name;
		Weapon *_weapon; 
};

#endif