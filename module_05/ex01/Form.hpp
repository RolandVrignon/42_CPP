/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:11:45 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 20:39:34 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef FORM_HPP
# define FORM_HPP

class Form {
    public :
        Form();
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(Form const &other);
        Form &operator=(Form const &other);
        ~Form();
        class GradeTooHighException {
            public : 
                void constructor() {
                    std::cout << "Constructor called, grade too high, howhever new Form created !" << std::endl;
                }
                void what() {
                    std::cout << "Grade too high" << std::endl;
                }
        };
        class GradeTooLowException {
            public : 
                void constructor() {
                    std::cout << "Constructor called, grade too low, howhever new Form created !" << std::endl;
                }
                void what() {
                    std::cout << "Grade too low" << std::endl;
                }
        };
    private : 
        std::string const _name;
        bool              _sign;
        int               _gradeToSign;
        int               _gradeToExecute;
};

#endif