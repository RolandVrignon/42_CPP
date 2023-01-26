/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:20:50 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/26 14:24:37 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact( void ) : complete(0) {
	return;
}

Contact::~Contact( void ) {
	return;
}

void Contact::addContact( void ) {
	int i;
	std::string firstname;
	std::string lastname;
	std::string darkestSecret;
	std::string nickname;
	std::string phoneNumber;
	
	i = 0;
	while (!firstname[0])
	{
		if (i == 0)
			std::cout << BOLDGREEN << "First Name : " << RESET; 
		else
			std::cout << BOLDRED << "First Name : " << RESET; 
		std::getline(std::cin, firstname);
		i++;
	}
	i = 0;
	while (!lastname[0])
	{
		if (i == 0)
			std::cout << BOLDGREEN << "Last Name : " << RESET;
		else
			std::cout << BOLDRED << "Last Name : " << RESET;
		std::getline(std::cin, lastname);	
		i++;
	}
	i = 0;
	while (!nickname[0])
	{
		if (i == 0)
			std::cout << BOLDGREEN << "Nickname : " << RESET;
		else
			std::cout << BOLDRED << "Nickname : " << RESET;
		std::getline(std::cin, nickname);
		i++;
	}
	i = 0;
	while (!phoneNumber[0])
	{
		if (i == 0)
			std::cout << BOLDGREEN << "PhoneNumber : " << RESET;
		else
			std::cout << BOLDRED << "PhoneNumber : " << RESET;
		std::getline(std::cin, phoneNumber);
		i++;
	}
	i = 0;
	while (!darkestSecret[0])
	{
		if (i == 0)
			std::cout << BOLDGREEN << "Darkest Secret : " << RESET;
		else
			std::cout << BOLDRED << "Darkest Secret : " << RESET;
		std::getline(std::cin, darkestSecret);
		i++;
	}
		
	this->complete = 1;
	this->_firstName = firstname;
	this->_lastName = lastname;
	this->_nickName = nickname;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
	
	return ;
}

static void display (std::string str) {
	int i = 0;
	if (str.size() > 10)
	{
		while (str[i] && i < 9)
		{
			std::cout << str[i];
			i++;
		}
		std::cout << ".|";
	}
	else
	{
		int size = str.size();
		while (size != 10) {
			std::cout << " ";
			size++;
		}
		std::cout << str;
		std::cout << "|";
	}
}

void Contact::showContact ( int index ) const {
	std::cout << "         " << index + 1 << "|";
	display(this->_firstName);
	display(this->_lastName);
	display(this->_nickName);
	std::cout << std::endl;
	return ;
}

void Contact::showContactDetails ( void ) const {
	std::cout << BOLDWHITE << "First name   || " << RESET << this->_firstName << std::endl;
	std::cout << BOLDWHITE << "Last name    || " << RESET << this->_lastName << std::endl;
	std::cout << BOLDWHITE << "Nickname     || " << RESET << this->_nickName << std::endl;
	std::cout << BOLDWHITE << "Phone Number || " << RESET << this->_phoneNumber << std::endl;
	std::cout << BOLDWHITE << "Secret       || " << RESET << this->_darkestSecret << std::endl;
	return ;
}