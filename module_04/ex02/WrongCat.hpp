/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:19:10 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/19 16:40:25 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Global.hpp"

#ifndef WRONG_WrongCat_HPP
# define WRONG_WrongCat_HPP

class WrongCat : public WrongAnimal {
    public :
        WrongCat();
        WrongCat(WrongCat const & other);
        WrongCat &operator=(WrongCat const & other);
        ~WrongCat();
        void makeSound(void) const;
};

#endif