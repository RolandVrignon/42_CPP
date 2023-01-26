/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:51:04 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/26 17:35:54 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ITER_HPP
# define ITER_HPP

template <typename array>
void print(array elem) {
    std::cout << *elem << std::endl;
}

template <typename array>
void iter(array &ptr, int size, void (*func)(array)) {
    int i = 0;
    while (i < size) {
        func(&ptr[i]);
        i++;
    }
}

#endif 