/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:08:31 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 18:10:22 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Global.hpp"

#ifndef DOG_HPP
# define DOG_HPP

class Dog : public A_Animal {
    public :
        Dog();
        Dog(Dog const & other);
        Dog &operator=(Dog const & other);
        ~Dog();
        virtual std::string makeSound(void) const;
        std::string getIdea(int nb) const;
        void        setIdea(std::string idea, int nb);
    private :
        Brain* _brain;
};

#endif