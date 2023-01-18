/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:03:52 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/18 12:50:19 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){
	return ;
}

Harl::~Harl(void){
	return ;
}

void Harl::complain(std::string level){
	const char* arr[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "other"};
	typedef void (Harl::*F_ptr)();
	F_ptr f_ptr[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i;
	for (i = 0; i < 4 && level.compare(arr[i]); i++);
	switch (i){
		case 4 :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
		default :
			std::cout << "[ " << level << " ]" << std::endl;
			while (i < 4)
			{
				(this->*f_ptr[i])();
				i++;
			}
			break ;
	}
	return ;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
	return ;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	return ;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	return ;
}