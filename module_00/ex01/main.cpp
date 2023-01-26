/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:17:09 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/26 15:23:14 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int main(void)
{
	std::string command;
	Phonebook Phonebook;

	while (command != "EXIT")
	{
		std::cout << BOLDYELLOW << "Enter your command : " << RESET;
		if (!std::getline(std::cin, command))
			break ;
		if (command == "ADD") {
			if (!Phonebook.handlePhoneBook())
				return (0);
		}
		else if (command == "SEARCH") {
			if (!Phonebook.showPhoneBook())
				return (0);
		}
		else if (command[0] == '\0')
			return (0);
		else if (command != "EXIT")
			std::cout << BOLDRED << "Please enter : ADD, SEARCH or EXIT" << RESET << std::endl;
	}
	
	return (0);
}