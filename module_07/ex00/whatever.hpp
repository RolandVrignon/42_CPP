/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:32:37 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/26 16:47:56 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
T const & max(T const &x, T const &y) {
    return ((x > y) ? x : y);
}

template <typename T>
T const & min(T const &x, T const &y) {
    return ((x < y) ? x : y);
}

template <typename T>
void swap(T &x, T &y) {
    T tmp;

    tmp = x;
    x = y;
    y = tmp;
    return ;
}

#endif 