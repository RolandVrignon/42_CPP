/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:20:50 by rvrignon          #+#    #+#             */
/*   Updated: 2022/12/07 16:53:30 by rvrignon         ###   ########.fr       */
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
	std::string firstname;
	std::string lastname;
	std::string darkestSecret;
	std::string nickname;
	std::string phoneNumber;
	
	
	while (!firstname[0])
	{
		std::cout << "First Name : "; 
		std::getline(std::cin, firstname);
	}
	while (!lastname[0])
	{
		std::cout << "Last Name : ";
		std::getline(std::cin, lastname);	
	}
	while (!nickname[0])
	{
		std::cout << "Nickname : ";
		std::getline(std::cin, nickname);
	}
	while (!phoneNumber[0])
	{
		std::cout << "PhoneNumber : ";
		std::getline(std::cin, phoneNumber);
	}
	while (!darkestSecret[0])
	{
		std::cout << "Darkest Secret : ";
		std::getline(std::cin, darkestSecret);
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
		while (str[i] && i < 10)
		{
			std::cout << str[i];
			i++;
		}
		std::cout << ".|";
	}
	else
	{
		while (str[i] && i < 10)
		{
			std::cout << str[i];
			i++;
		}
		while (i < 10)
		{
			std::cout << " ";
			i++;
		}
		std::cout << "|";
	}
}

void Contact::showContact ( int index ) const {
	std::cout << index + 1 << "         |";
	display(this->_firstName);
	display(this->_lastName);
	display(this->_nickName);
	std::cout << std::endl;
	return ;
}

void Contact::showContactDetails ( void ) const {
	std::cout << "First name   || " << this->_firstName << std::endl;
	std::cout << "Last name    || " << this->_lastName << std::endl;
	std::cout << "Nickname     || " << this->_nickName << std::endl;
	std::cout << "Phone Number || " << this->_phoneNumber << std::endl;
	std::cout << "Secret       || " << this->_darkestSecret << std::endl;
	return ;
}