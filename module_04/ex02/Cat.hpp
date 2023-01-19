/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:30:10 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 18:10:15 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Global.hpp"

#ifndef CAT_HPP
# define CAT_HPP

class Cat : public A_Animal {
    public :
        Cat();
        Cat(Cat const & other);
        Cat &operator=(Cat const & other);
        ~Cat();
        virtual std::string makeSound(void) const;
        std::string getIdea(int nb) const;
        void        setIdea(std::string idea, int nb);
    private :
        Brain* _brain;
};

#endif