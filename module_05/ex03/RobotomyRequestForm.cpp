/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:19:05 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/25 21:39:29 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("empty") {
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	std::cout << "Target is set empty by default" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other.getName(), other.getGradeToSign(), other.getGradeToExecute()), _target(other._target) {
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	std::cout << "Target is set as " << this->_target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target)
: Form(name, 72, 45), _target(target) {
	std::cout << "RobotomyRequestForm assign constructor called" << std::endl;
	std::cout << "Target is set as " << this->_target << std::endl;
}

// Destructor

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

// Overload operator

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	this->_target = other._target;
	return (*this);
}

// Member function

void	RobotomyRequestForm::exec_form(void) const
{
    srand(time(0));
    int a = rand() % 1000 + 1;
 	std::cout << "VrrrrrVrrgrrgrrrrr * je suis une perceuse *" << std::endl;
   	if (a % 2 == 0) {
		std::cout << this->_target << " was successfully robotomised !" << std::endl;
    } else {
		std::cout << "Robotomy of " << this->_target << " failed ..." << std::endl;
    }
}