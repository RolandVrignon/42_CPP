/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:11:45 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/25 19:07:24 by rvrignon         ###   ########.fr       */
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
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(Form const &other);
        Form &operator=(Form const &other);
        ~Form();
        
        // Member Functions
        std::string getName() const;
        int         getGradeToSign() const;
        int         getGradeToExecute() const;
        bool        isSigned() const;
        void        beSigned(const class Bureaucrat &Bureaucrat);
        void        setSignTrue();
        
        // Exceptions
        class GradeTooHighException {
            public : 
                void constructor() {
                    std::cout << "Constructor called, grade too high, howhever new Form created !" << std::endl;
                }
                void signature() {
                    std::cout << "Grade too high to sign form" << std::endl;
                }
        };
        class GradeTooLowException {
            public : 
                void constructor() {
                    std::cout << "Constructor called, grade too low, howhever new Form created !" << std::endl;
                }
                void signature() {
                    std::cout << "Grade too low to sign form" << std::endl;
                }
        };
        class AlreadySigned {
            public : 
                void signature() {
                    std::cout << "Form is already signed" << std::endl;
                }
        };
    private : 
        std::string const _name;
        bool              _sign;
        int               _gradeToSign;
        int               _gradeToExecute;
};

std::ostream & operator<<(std::ostream &out, Form const &in);

#endif