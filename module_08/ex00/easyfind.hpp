/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:14:34 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/28 15:32:26 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
#include <list>
#include <vector>

#ifndef EASYFIND_H
# define EASYFIND_H

template <typename T>
void easyfind(T elem, int x) { 
    try {
        if (std::find(elem.begin(), elem.end(), x) != elem.end())
        {
            std::cout << "Occurence found for " << x << std::endl;
            return ;
        }
        throw std::exception();
    } catch (std::exception &e) {
        std::cerr << "No Occurence found for x = " << x << " in container" << std::endl;
    }
}

#endif