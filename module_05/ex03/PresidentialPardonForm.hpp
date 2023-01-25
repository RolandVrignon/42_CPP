/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:15:44 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/25 19:16:35 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &other);
		~PresidentialPardonForm();
		PresidentialPardonForm(const std::string name, const std::string target);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &other);
		void	exec_form(void) const;

	private:
		std::string _target;
};

#endif