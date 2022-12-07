/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:01:44 by rvrignon          #+#    #+#             */
/*   Updated: 2022/12/07 18:01:55 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie {

public:
	Zombie(void);
	~Zombie(void);
	void announce(void);
	void setName( std::string name );
	std::string getName(void);

private:
	std::string _name;
};

Zombie*	newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif