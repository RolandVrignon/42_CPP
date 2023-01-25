/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:43:28 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/25 21:39:10 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("empty") {
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	std::cout << "Target is set empty by default" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other.getName(), other.getGradeToSign(), other.getGradeToExecute()), _target(other._target) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	std::cout << "Target is set as " << this->_target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target)
: Form(name, 145, 137), _target(target) {
	std::cout << "ShrubberyCreationForm assign constructor called" << std::endl;
	std::cout << "Target is set as " << this->_target << std::endl;
}

// Destructor

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

// Overload operator

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	this->_target = other._target;
	return (*this);
}

// Member function

void	ShrubberyCreationForm::exec_form(void) const
{
	std::string str = this->_target;
	str.append("_shrubberry");
	std::ofstream o(str.c_str());

	int size_leaf = 16;
	int size_trunk = 8;

	for (int i = 0; i < size_leaf + 1; i++)
		o << " ";
	o << "/\\" << std::endl;
	for (int i = 0; i < size_leaf; i++)
	{
		for (int k = size_leaf; k - i > 0; k--)
				o << " ";
		o << "/";
		for (int j = -1; j < i; j++)
			if (j % 3 == 0)
				o << "#*";
			else
				o << "##";
		o << "\\";
		o << std::endl;
	}
	for (int i = 0; i < size_trunk; i++)
	{
		for (int j = (size_leaf / 3) * 2 - 1; j < size_leaf * 2 - (size_leaf / 3) * 2; j++)
			o << " ";
		for (int k = (size_leaf / 3) * 2; k < size_leaf * 2 - (size_leaf / 3) * 2; k++)
		{
			if (i % 3 == 0 || k % 2 == 0)
				o << "0";
			else
				o << "@";
		}
		if (i == size_trunk - 1)
			o << " rolexx was there";
		o << std::endl;
	}
	for (int i = 0; i < size_leaf; i++)
		o << "'`";
}