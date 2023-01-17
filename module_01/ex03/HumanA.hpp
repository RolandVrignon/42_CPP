/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:50:16 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/17 18:52:54 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "Weapon.hpp"

#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA {
	public : 
		HumanA(std::string name, Weapon &weapon);
		void attack(void) const;
	private :
		std::string _name;
		Weapon &_weapon; 
};

#endif