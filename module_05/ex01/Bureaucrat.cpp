/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:32:29 by rvrignon          #+#    #+#             */
/*   Updated: 2023/02/01 20:35:22 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("John"), _grade(150) {
    std::cout << "Default Construtor called, say hello to John, his grade has been set to 150." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int nb) : _name(name) {
    try {
        if (nb < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (nb > 150)
            throw Bureaucrat::GradeTooLowException();
        else {
            this->_grade = nb;
            std::cout << "Constructor called, say hello to " << this->_name << ", his grade has been set to " << this->_grade << std::endl;
        }
    } catch (Bureaucrat::GradeTooHighException &e) {
        e.constructor();
        this->_grade = 150;
    } catch (Bureaucrat::GradeTooLowException &e ) {
        e.constructor();
        this->_grade = 150;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : _name(other._name), _grade(other._grade) {
    std::cout << "Constructor by copy called, say hello to " << this->getName() << std::endl;
    return ;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &other) {
    _grade = other._grade;
    std::cout << "Constructor by overload called, say hello to " << this->getName() << std::endl;
    return (*this);
}

std::ostream& operator<<(std::ostream &out, Bureaucrat const &in)
{
	out << in.getName() << ", Bureaucrat grade " << in.getGrade();
	return (out);
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat " << this->getName() << " has been killed.." << std::endl;
}

std::string Bureaucrat::getName() const {
    return this->_name;
}

unsigned int Bureaucrat::getGrade() const {
    return this->_grade;
}

void Bureaucrat::bePromoted() {
    try {
        if (_grade == 1) 
            throw Bureaucrat::GradeTooHighException();
        else
        {
            _grade--;
            std::cout << this->getName() << " has been promoted, his new grade is now : " << this->getGrade() << std::endl;
        }
    }  catch (Bureaucrat::GradeTooHighException &e) {
        e.promotion();
    }
}

void Bureaucrat::beRetrograded() {
    try {
        if (_grade == 150) 
            throw Bureaucrat::GradeTooLowException();
        else
        {
            _grade++;
            std::cout << this->getName() << " has beed retrograded, his new grade is now : " << this->getGrade() << std::endl;
        }
    }  catch (Bureaucrat::GradeTooLowException &e) {
        e.retrogation();
    }
}

void Bureaucrat::signForm(Form &form) {
    if (form.isSigned()) {
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because form is already signed." << std::endl;
    } else if (this->_grade <= form.getGradeToSign()) {
        form.setSignTrue();
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    } else {
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because grade is too low." << std::endl;
    }
    return ;
}