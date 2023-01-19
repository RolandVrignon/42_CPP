/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:08:31 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 15:17:08 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal {
    public :
        Dog();
        Dog(Dog const & other);
        Dog &operator=(Dog const & other);
        ~Dog();
        virtual void makeSound(void) const;
};

#endif