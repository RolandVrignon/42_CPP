/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:07:38 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 18:24:44 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Global.hpp"

#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP

class A_Animal {
    public : 
        A_Animal();
        A_Animal(A_Animal const &other);
        A_Animal &operator=(A_Animal const &other);
        virtual ~A_Animal();
        virtual std::string makeSound(void) const = 0;
        std::string getType(void) const;
        void setType(std::string type);
    private :
        std::string _type;
};

#endif