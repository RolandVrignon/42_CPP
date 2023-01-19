/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:42:47 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 19:36:39 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat Xavier("Xavier", 1);
	Bureaucrat Kevin("Kevin", 0);
	
	std::cout << std::endl << Xavier << std::endl;
	Xavier.bePromoted();
	std::cout << Xavier << std::endl << std::endl;

    std::cout << Xavier << std::endl;
	Xavier.beRetrograded();
	std::cout << Xavier << std::endl << std::endl;

	std::cout << Kevin << std::endl;
	Kevin.beRetrograded();
	std::cout << Kevin << std::endl << std::endl;

    std::cout << Kevin << std::endl;
	Kevin.bePromoted();
	std::cout << Kevin << std::endl << std::endl;

	Bureaucrat Jules("Jules", 2500);
	std::cout << Jules << std::endl;
	Jules.bePromoted();
	std::cout << Jules << std::endl;
	Jules.beRetrograded();
	Jules.beRetrograded();
	std::cout << Jules << std::endl << std::endl;
    
	return (0);
}