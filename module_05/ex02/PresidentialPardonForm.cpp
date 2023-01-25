/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:37:35 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/25 21:40:37 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("empty") {
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
	std::cout << "Target is set empty by default" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other.getName(), other.getGradeToSign(), other.getGradeToExecute()), _target(other._target) {
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	std::cout << "Target is set as " << this->_target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target)
: Form(name, 25, 5), _target(target) {
	std::cout << "PresidentialPardonForm assign constructor called" << std::endl;
	std::cout << "Target is set as " << this->_target << std::endl;
}

// Destructor

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

// Overload operator

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	this->_target = other._target;
	return (*this);
}

// Member function

void	PresidentialPardonForm::exec_form(void) const
{
    std::cout << this->_target << " has been forgiven by Zaphold Beeblebrox" << std::endl;
    return;
}