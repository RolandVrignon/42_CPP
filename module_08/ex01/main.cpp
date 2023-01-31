/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:35:19 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/31 14:18:46 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(){
    std::cout << "----- Subject Test ------" << std::endl;
    Span sp = Span(5);    
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    // ###############################################################
    
    std::cout << std::endl;
    std::cout << "----- Test with 10 numbers -----" << std::endl;
    Span ten(10);
    for (int i = 0; i < 11; i++) {
        ten.addNumber((rand() % 100) + 1);
    }
    ten.display();
    std::cout << ten.shortestSpan() << std::endl;
    std::cout << ten.longestSpan() << std::endl;
    
    // ###############################################################
    
    std::cout << std::endl;
    std::cout << "----- Test with 10000 numbers -----" << std::endl;
    Span a;
    Span b(10000);
    a = b;
    for (int i = 0; i < 10001; i++) {
        a.addNumber((rand() % 90000) + 1);
    }
    std::cout << a.shortestSpan() << std::endl;
    std::cout << a.longestSpan() << std::endl;

    return 0;
}