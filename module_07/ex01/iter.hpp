/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:51:04 by rvrignon          #+#    #+#             */
/*   Updated: 2023/02/02 15:41:02 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void print( T const & x ) { 
    std::cout << x << std::endl; 
    return;
}

template <typename array, typename T>
void iter(array &ptr, int size, void (*func)(T)) {
    int i = 0;
    while (i < size) {
        func(ptr[i]);
        i++;
    }
}

#endif 