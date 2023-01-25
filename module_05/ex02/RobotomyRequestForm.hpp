/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:15:22 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/25 21:25:37 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <ctime>
#include <cstdlib>

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm(const std::string name, const std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(const RobotomyRequestForm &other);
		void	exec_form(void) const;
		
	private:
		std::string _target;
};

#endif