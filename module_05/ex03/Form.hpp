/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:11:45 by rvrignon          #+#    #+#             */
/*   Updated: 2023/02/01 20:41:39 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Form {
    public :
        // Constructors Destructors
        Form();
        Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExecute);
        Form(Form const &other);
        Form &operator=(Form const &other);
        virtual ~Form();
        
        // Accessors // Settors
        std::string     getName() const;
        unsigned int             getGradeToSign() const;
        unsigned int             getGradeToExecute() const;
        void            setSignTrue();
        bool            getSigned() const;

        // Member Functions
        void                beSigned(const class Bureaucrat &Bureaucrat);
        void                execute(const class Bureaucrat &executor) const;
        virtual void		exec_form(void) const = 0;
        
        // Exceptions
        class GradeTooHighException {
            public : 
                void constructor() {
                    std::cout << "Constructor called, grade too high, howhever new Form created !" << std::endl;
                }
                void signature() {
                    std::cout << "Grade too high to sign form." << std::endl;
                }
        };
        class GradeTooLowException {
            public : 
                void constructor() {
                    std::cout << "Constructor called, grade too low, howhever new Form created !" << std::endl;
                }
                void signature() {
                    std::cout << "Grade too low to sign form." << std::endl;
                }
        };
        class AlreadySigned {
            public : 
                void signature() {
                    std::cout << "Form is already signed." << std::endl;
                }
        };        
        class UnableToExecuteForm 
        {
            public : 
                virtual void error() const throw() {
                    std::cout << "Unable to execute Form." << std::endl;
                }
        };
    private : 
        std::string const _name;
        bool              _sign;
        unsigned int const         _gradeToSign;
        unsigned int const         _gradeToExecute;
};

std::ostream & operator<<(std::ostream &out, Form const &in);

#endif