/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:35:19 by rvrignon          #+#    #+#             */
/*   Updated: 2023/02/02 16:17:19 by rvrignon         ###   ########.fr       */
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
    std::cout << "----- Test with addNumber() function -----" << std::endl;
    Span ten(10);
    for (int i = 0; i < 12; i++) {
        ten.addNumber((rand() % 1000) + 1);
    }
    ten.display();
    std::cout << ten.shortestSpan() << std::endl;
    std::cout << ten.longestSpan() << std::endl;

    // ###############################################################
    
    std::cout << std::endl;
    std::cout << "----- Test with iteratorRange() function -----" << std::endl;
    Span mille(10);
    mille.iteratorRange(100);
    mille.display();
    std::cout << mille.shortestSpan() << std::endl;
    std::cout << mille.longestSpan() << std::endl;
    
    // ###############################################################
    
    std::cout << std::endl;
    std::cout << "----- Test with 10000 numbers => addNumber() function -----" << std::endl;
    Span a;
    Span b(10000);
    a = b;
    for (int i = 0; i < 10001; i++) {
        a.addNumber((rand() % 90000) + 1);
    }
    std::cout << a.shortestSpan() << std::endl;
    std::cout << a.longestSpan() << std::endl;

    // ###############################################################
    
    std::cout << std::endl;
    std::cout << "----- Test with 10000 numbers => iteratorRange() function -----" << std::endl;
    Span tenmille(10);
    tenmille.iteratorRange(10000000);
    std::cout << tenmille.shortestSpan() << std::endl;
    std::cout << tenmille.longestSpan() << std::endl;
    
    return 0;
}