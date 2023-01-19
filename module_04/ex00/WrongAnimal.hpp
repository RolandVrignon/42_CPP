/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:14:32 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 15:14:51 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

class WrongAnimal {
    public : 
        WrongAnimal();
        WrongAnimal(WrongAnimal const &other);
        WrongAnimal &operator=(WrongAnimal const &other);
        ~WrongAnimal();
        void makeSound(void) const;
        std::string getType(void) const;
        void setType(std::string type);
    private :
        std::string _type;
};

#endif