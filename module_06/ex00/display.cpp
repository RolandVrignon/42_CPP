/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 00:51:13 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/26 01:22:07 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void displayChar(int nb) {
    if ((nb >= 0 && nb <= 32) || nb == 127)
        std::cout << "char   : Non displayable" << std::endl;
    else if (nb > 32 && nb < 127)
        std::cout << "char   : " << static_cast<char>(nb) << std::endl;
    else
        std::cout << "char   : Impossible" << std::endl;
}

void displayNan(std::string str) {
    std::cout << "char   : Impossible" << std::endl;
    std::cout << "int    : Impossible" << std::endl;
    std::cout << "float  : " << "nanf" << std::endl;
    std::cout << "double : " << "nan" << std::endl;
}

void displayInf(std::string str) {
    std::cout << "char   : Impossible" << std::endl;
    std::cout << "int    : Impossible" << std::endl;
    std::cout << "float  : " << str[0] << "inff" << std::endl;
    std::cout << "double : " << str[0] << "inf" << std::endl;
}