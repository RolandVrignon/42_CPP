/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:42:47 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/25 19:07:50 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	Bureaucrat Xavier("Xavier", 1);
	Bureaucrat Kevin("Kevin", 0);
	
	Form total("total", 45, 25);
	Form bidon("bidon", 160, 25);
	Form tdf("tdf", 25, 0);
	std::cout << std::endl;
	
	std::cout << total << std::endl;
	std::cout << bidon << std::endl;
	std::cout << tdf << std::endl;
	std::cout << std::endl;
	
	total.beSigned(Kevin);
	Kevin.signForm(total);
	std::cout << std::endl;

	total.beSigned(Xavier);
	Xavier.signForm(total);
	std::cout << std::endl;

	Xavier.signForm(tdf);
	tdf.beSigned(Xavier);
	std::cout << std::endl;

	std::cout << total << std::endl;
	std::cout << bidon << std::endl;
	std::cout << tdf << std::endl;
	std::cout << std::endl;

	std::cout << total << std::endl;
	return (0);
}