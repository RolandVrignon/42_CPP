/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:17:09 by rvrignon          #+#    #+#             */
/*   Updated: 2022/12/08 12:48:05 by rvrignon         ###   ########.fr       */
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
		std::getline(std::cin, command);
		if (command == "ADD")
			Phonebook.handlePhoneBook();
		else if (command == "SEARCH")
			Phonebook.showPhoneBook();
		else if (command[0] == '\0')
			return (0);
		else if (command != "EXIT")
			std::cout << BOLDRED << "Please enter : ADD, SEARCH or EXIT" << RESET << std::endl;
	}
	
	return (0);
}