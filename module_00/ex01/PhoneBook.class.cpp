/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:40:37 by rvrignon          #+#    #+#             */
/*   Updated: 2022/12/07 17:08:16 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

Phonebook::Phonebook( void ) : _capacity(8), _latest(0) {
	return;
}

Phonebook::~Phonebook( void ) {
	return;
}

void Phonebook::handlePhoneBook ( void ){
	int i = 0;
	
	while (_contact[i].complete == 1 && i < this->_capacity - 1)
		i++;
	if (i == this->_capacity - 1 && _contact[i].complete == 1)
	{
		if (this->_latest == this->_capacity)
			this->_latest = 0;
		i = this->_latest;
		this->_latest += 1;
	}
	_contact[i].addContact();
	return ;
}

void Phonebook::showPhoneBook ( void ){
	int i = 0;
	int show = 0;
	std::string buffer;
	
	while (_contact[i].complete == 1 && i < this->_capacity)
	{
		_contact[i].showContact(i);
		i++;
	}
	if (i == 0)
	{
		std::cout << BOLDRED << "There is nobody in your phoneBook, please ADD someone :(" << RESET << std::endl;
		return ;
	}
	while (!show)
	{
		std::cout << BOLDYELLOW << "Enter Index of the contact : " << RESET;
		std::getline(std::cin, buffer);
		i = buffer[0] - '0';
		if (i > this->_capacity || !_contact[i - 1].complete || buffer[1])
			std::cout << BOLDRED << "Invalid Index" << RESET << std::endl;
		else
			show = 1;
	}
	_contact[i - 1].showContactDetails();
}