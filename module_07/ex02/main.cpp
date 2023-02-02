/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:16:04 by rvrignon          #+#    #+#             */
/*   Updated: 2023/02/02 13:34:00 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.cpp"

int main (void) {
    std::cout << "##### Constructors ######" << std::endl << std::endl;
    Array<int> int_empty;
    Array<int> int_filled(5);
    
    int_filled[0] = 10;
    int_filled[1] = 20;
    int_filled[2] = 30;
    int_filled[3] = 40;
    int_filled[4] = 50;

    Array<int> int_assigned(int_filled);
    Array<int> int_overload;
    int_overload = int_filled;
    
    
    std::cout << std::endl << "##### Get size of differents arrays ######" << std::endl << std::endl;
    std::cout << int_empty.getSize() << std::endl;
    std::cout << int_filled.getSize() << std::endl;
    std::cout << int_assigned.getSize() << std::endl;
    std::cout << int_overload.getSize() << std::endl;

    std::cout << std::endl << "##### Get Values of differents index ######" << std::endl << std::endl;
    try {
        std::cout << int_filled[0] << std::endl;
        std::cout << int_assigned[1] << std::endl;
        std::cout << int_overload[2] << std::endl;
        std::cout << int_overload[7] << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << std::endl << "##### Destructors ######" << std::endl << std::endl;


    return (0);
}