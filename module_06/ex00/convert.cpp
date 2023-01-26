/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 00:31:10 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/26 01:06:15 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void convert_char(std::string str) {
    std::cout << "char   : " << str << std::endl;
    std::cout << "int    : " << static_cast<int>(str[0]) << std::endl;
    std::cout << "float  : " << static_cast<float>(str[0]) << ".0f" << std::endl;
    std::cout << "double : " << static_cast<double>(str[0]) << ".0" << std::endl;
    return ;
}

void convert_int(int nb) {
    displayChar(nb);
    std::cout << "int    : " << nb << std::endl;
    std::cout << "float  : " << static_cast<float>(nb) << ".0f" << std::endl;
    std::cout << "double : " << static_cast<double>(nb) << ".0" << std::endl;
    return ;
}

void convert_double(double nb){
    int i = static_cast<int>(nb);
    double res = nb - i;
    
    displayChar(i);
    std::cout << "int    : " << i << std::endl;
    
    if ( res == 0) {
        std::cout << "float  : " << static_cast<float>(nb) << ".0f" << std::endl;
    } else {
        std::cout << "float  : " << static_cast<float>(nb) << "f" << std::endl;
    }
    
    if (res == 0) {
        std::cout << "double : " << nb << ".0" << std::endl;
    } else {
        std::cout << "double : " << nb << std::endl;
    }
    return ;
}

void convert_float(float nb){

    int i = static_cast<int>(nb);
    float res = nb - i;

    displayChar(i);
    std::cout << "int    : " << i << std::endl;
    
    if ( res == 0) {
        std::cout << "float  : " << nb << ".0f" << std::endl;
    } else {
        std::cout << "float  : " << nb << "f" << std::endl;
    }
    
    if (res == 0) {
        std::cout << "double : " << static_cast<double>(nb) << ".0" << std::endl;
    } else {
        std::cout << "double : " << static_cast<double>(nb) << std::endl;
    }
    return ;
}