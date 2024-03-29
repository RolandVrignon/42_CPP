/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:27:00 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/26 15:21:41 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
# include <string>
# include "Contact.class.hpp"

class Phonebook {
public :
	bool		handlePhoneBook( void );
	bool		showPhoneBook (void);
	Phonebook( void );
	~Phonebook( void );

private :
	int const	_capacity;
	Contact		_contact[8];
	int			_latest;
};

#endif