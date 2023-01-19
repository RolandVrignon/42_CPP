/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:30:10 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 15:17:04 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef CAT_HPP
# define CAT_HPP

class Cat : public Animal {
    public :
        Cat();
        Cat(Cat const & other);
        Cat &operator=(Cat const & other);
        ~Cat();
        virtual void makeSound(void) const;
};

#endif