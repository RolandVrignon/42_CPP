/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:29:41 by rvrignon          #+#    #+#             */
/*   Updated: 2023/02/01 20:34:50 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class Bureaucrat {
    public : 
        Bureaucrat();
        Bureaucrat(std::string name, unsigned int echelon);
        Bureaucrat(Bureaucrat const &other);
        Bureaucrat& operator=(Bureaucrat const &other);
        ~Bureaucrat();
        std::string getName(void) const;
        unsigned int   getGrade(void) const;
        void        beRetrograded();
        void        bePromoted();
        void        signForm(class Form &form);
        void        executeForm(Form const &form) const;

        class GradeTooHighException
        {
            public:
                virtual void constructor() const throw() {
                    std::cout << "Grade too high, but constructor called, your grade has been set to 150." << std::endl;
                }
                virtual void promotion() const throw() {
                    std::cout << "Sorry Boss, you already are the number 1 boss." << std::endl;
                }
        };

        class GradeTooLowException
        {
            public:
                virtual void constructor() const throw() {
                    std::cout << "Grade too low, but constructor called, your grade has been set to 150." << std::endl;
                }
                virtual void retrogation() const throw() {
                    std::cout << "Grade too low idiot, you already are the dumbest Bureaucrat ever.." << std::endl;
                }
        };
    private : 
        std::string const _name;
        unsigned int      _grade;
};

std::ostream & operator<<(std::ostream &out, Bureaucrat const &in);

#endif
