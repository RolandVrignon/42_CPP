/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:44:40 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/25 21:46:52 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

#ifndef INTERN_HPP
# define INTERN_HPP

class Intern
{
	public:

		Intern();
		Intern(const Intern &src);
		~Intern();

		Intern& operator=(const Intern &rhs);
		Form*	makeForm(std::string name, std::string target);

		class UnknownFormException : public std::exception
		{
				virtual const char* what() const throw();
		};
		
};

#endif