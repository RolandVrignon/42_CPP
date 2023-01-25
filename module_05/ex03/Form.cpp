/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:14:28 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/25 21:16:39 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructors

Form::Form() : _name("Boring Form"), _sign(false), _gradeToSign(150), _gradeToExecute(150) { 
    std::cout << "Default form constructor called" << std::endl;
    return ;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _sign(0) {
    try {
        if (gradeToSign > 150)
            throw Form::GradeTooLowException();
        if (gradeToSign < 1)
            throw Form::GradeTooHighException();
        if (gradeToExecute > 150)
            throw Form::GradeTooLowException();
        if (gradeToExecute < 1)
            throw Form::GradeTooHighException();
        this->_gradeToExecute = gradeToExecute;
        this->_gradeToSign = gradeToSign;
        std::cout << "Constructor called, new Form created !" << std::endl;
    } catch (Form::GradeTooLowException &e) {
        if (gradeToSign > 150)
            this->_gradeToSign = 150;
        else
            this->_gradeToSign = gradeToSign;

        if (gradeToExecute > 150)
            this->_gradeToExecute = 150;
        else
            this->_gradeToExecute = gradeToExecute;

        e.constructor();
    } catch (Form::GradeTooHighException &e) {
        if (gradeToSign < 1)
            this->_gradeToSign = 1;
        else
            this->_gradeToSign = gradeToSign;

        if (gradeToExecute < 1)
            this->_gradeToExecute = 150;
        else
            this->_gradeToExecute = gradeToExecute;
       
        e.constructor();
    }
}

Form::Form(Form const &other) : _name(other._name), _sign(other._sign), _gradeToSign(other._sign), _gradeToExecute(other._gradeToExecute) { 
    std::cout << "Form Copy Constructor called" << std::endl;
}

// FORM Overload

Form &Form::operator=(Form const &other) {
    _sign = other._sign;
    _gradeToExecute = other._gradeToExecute;
    _gradeToSign = other._gradeToSign;
    std::cout << "Form constructor by overload" << std::endl;
    return (*this);
}

// STDOUT Overload

std::ostream& operator<<(std::ostream &out, Form const &in)
{
    if (in.getSigned()) {
        out << "Form \"" << in.getName() << "\" can be signed at grade " << in.getGradeToSign() << " and can be executed at grade " << in.getGradeToExecute() << ". Form has been signed";
    } else {
        out << "Form \"" << in.getName() << "\" can be signed at grade " << in.getGradeToSign() << " and can be executed at grade " << in.getGradeToExecute() << ". Form hasn't been signed yet.";
    }
    return (out);
}

// Destructor

Form::~Form() { 
    std::cout << "Default Destructor called, bye bye boring form" << std::endl;
}

// Accessors // Settors

std::string Form::getName() const {
    return (this->_name);
}

int         Form::getGradeToSign() const {
    return (this->_gradeToSign);
}

int         Form::getGradeToExecute() const {
    return (this->_gradeToExecute);
}

void Form::setSignTrue() {
    this->_sign = true;
}

bool        Form::getSigned() const {
    if (this->_sign)
        return true;
    return false;
}

// Member Function

void Form::beSigned(const class Bureaucrat &Bureaucrat) {
    try {
        if (this->getSigned()) {
            throw Form::AlreadySigned();
        } else if (Bureaucrat.getGrade() <= this->getGradeToSign() && Bureaucrat.getGrade() >= 1) {
            this->_sign = true;
        } else if (Bureaucrat.getGrade() <= 1) {
            throw Form::GradeTooHighException();
        } else {
            throw Form::GradeTooLowException();
        }
    } catch (Form::AlreadySigned &e) {
        e.signature();
    } catch (Form::GradeTooHighException &e) {
        e.signature();
    } catch (Form::GradeTooLowException &e) {
        e.signature();
    }
}

void	Form::execute(const class Bureaucrat &executor) const {
	try {
        if (this->getSigned() && executor.getGrade() <= this->getGradeToExecute()) {
            std::cout << executor.getName() << " executed " << this->getName() << std::endl;
            exec_form();
        } else {
            throw Form::UnableToExecuteForm();
        }
    } catch (Form::UnableToExecuteForm &e) {
        e.error();
    }
    return ;
}