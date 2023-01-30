/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:06:51 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/28 15:32:33 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main () {
    
    int i;
    
    // Lists
    std::list<int> lst;

    for (i = 0; i < 20; i++)
        lst.push_back(i);

    easyfind(lst, 19);
    easyfind(lst, 319);

    // Vectors
    std::vector<double> vector;
    for (i = 0; i < 20; i++)
        vector.push_back(i);
    
    easyfind(lst, 19);
    easyfind(lst, 121);

    return (0);
}