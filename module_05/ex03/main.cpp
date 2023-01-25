/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:42:47 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/25 21:56:52 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Colors.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main(void) {
 
	Bureaucrat Xavier("Xavier", 1);
	Intern intern;
	Form* rrf;

	std::cout << std::endl << BOLDYELLOW << "Robotomy test" << RESET << std::endl;
	if ((rrf = intern.makeForm("robotomy request", "Bender")))
	{
		std::cout << *rrf << std::endl;
		rrf->beSigned(Xavier);
		std::cout << *rrf << std::endl;
		Xavier.executeForm(*rrf);
		delete rrf;
	}
	std::cout << std::endl << BOLDYELLOW << "Shrub test" << RESET << std::endl;
	Form* shrub;
	if ((shrub = intern.makeForm("shrubberry creation", "Marcel")))
	{
		std::cout << *shrub << std::endl;
		shrub->beSigned(Xavier);
		std::cout << *shrub << std::endl;
		Xavier.executeForm(*shrub);
		delete shrub;
	}
	std::cout << std::endl << BOLDYELLOW << "Presidential test" << RESET << std::endl;
	Form* pardon;
	if ((pardon = intern.makeForm("presidential pardon", "Henry")))
	{
		std::cout << *pardon << std::endl;
		pardon->beSigned(Xavier);
		std::cout << *pardon << std::endl;
		Xavier.executeForm(*pardon);
		delete pardon;
	}

	std::cout << std::endl << BOLDYELLOW << "Null TEST" << RESET << std::endl;
	Form* null;
	if ((null = intern.makeForm("null", "Henry")))
	{
		std::cout << *null << std::endl;
		null->beSigned(Xavier);
		std::cout << *null << std::endl;
		Xavier.executeForm(*null);
		delete null;
	}

	std::cout << std::endl << BOLDYELLOW << "DESTRUCTORS" << RESET << std::endl;
	return (0);
}