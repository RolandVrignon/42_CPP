/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:14:28 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 20:39:54 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

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

Form &Form::operator=(Form const &other) {
    _sign = other._sign;
    _gradeToExecute = other._gradeToExecute;
    _gradeToSign = other._gradeToSign;
    std::cout << "Form constructor by overload" << std::endl;
    return (*this);
}

Form::~Form() { 
    std::cout << "Default Destructor called, bye bye boring form" << std::endl;
}