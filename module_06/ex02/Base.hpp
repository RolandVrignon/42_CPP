/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 02:22:35 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/26 02:28:45 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

#ifndef BASE_HPP
# define BASE_HPP

class Base {
    public : 
        virtual ~Base(){};
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

#endif