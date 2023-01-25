/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:44:25 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/25 21:46:58 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <cstring>

// Constructors

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &src)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = src;
}

// Destructor

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

// Overload operator

Intern&	Intern::operator=(const Intern &rhs)
{
	if (this == &rhs)
		return (*this);
	else
		return (*this);
}

// Member function

Form*	Intern::makeForm(std::string name, std::string target)
{
	int i;
	const char *array_ptr[3] = {"robotomy request", "presidential pardon", "shrubberry creation"};

	for (i = 0; i < 3 && name.compare(array_ptr[i]) != 0 ; i++);
	switch (i)
	{
		case (0):
			return (new RobotomyRequestForm(name, target));
		case (1):
			return (new PresidentialPardonForm(name, target));
		case (2):
			return (new ShrubberyCreationForm(name, target));
		default:
			std::cout << "Intern tried to create a form that doesn't exist" << std::endl;
			return (NULL);
	}
}