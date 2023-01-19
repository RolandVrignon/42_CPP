/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:15:56 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 18:06:55 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Global.hpp"

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class Animal {
    public : 
        Animal();
        Animal(Animal const &other);
        Animal &operator=(Animal const &other);
        virtual ~Animal();
        virtual std::string makeSound(void) const;
        std::string getType(void) const;
        void setType(std::string type);
    private :
        std::string _type;
};

#endif