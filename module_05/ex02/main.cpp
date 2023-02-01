/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:42:47 by rvrignon          #+#    #+#             */
/*   Updated: 2023/02/01 20:20:18 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Colors.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main(void) {
	
	// Form test;
	
	std::cout << BOLDYELLOW << "### BUREAUCRATES ###" << RESET << std::endl;
	Bureaucrat Xavier("Xavier", 1);
	Bureaucrat Kevin("Kevin", 0);
	
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "### ShrubberyCreationForm form ###" << RESET << std::endl;
	ShrubberyCreationForm Test("mynameis", "destination");
	std::cout << std::endl;
	std::cout << Test << std::endl;
	Xavier.executeForm(Test);
	Test.execute(Xavier);
	Xavier.signForm(Test);
	Xavier.executeForm(Test);
	Test.execute(Xavier);
	
	std::cout << std::endl;

	std::cout << BOLDYELLOW << "### RobotomyRequestForm form ###" << RESET << std::endl;
	RobotomyRequestForm loop("mynameis", "destination");
	std::cout << std::endl;
	std::cout << loop << std::endl;
	Xavier.executeForm(loop);
	loop.execute(Xavier);
	Xavier.signForm(loop);
	Xavier.executeForm(loop);
	loop.execute(Xavier);

	std::cout << std::endl;

	std::cout << BOLDYELLOW << "### PresidentialPardonForm form ###" << RESET << std::endl;
	PresidentialPardonForm g("mynameis", "destination");
	std::cout << std::endl;
	std::cout << g << std::endl;
	Xavier.executeForm(g);
	g.execute(Xavier);
	Xavier.signForm(g);
	Xavier.executeForm(g);
	g.execute(Xavier);

	std::cout << std::endl;

	std::cout << BOLDYELLOW << "### DESTUCTORS ###" << RESET << std::endl;
	return (0);
}