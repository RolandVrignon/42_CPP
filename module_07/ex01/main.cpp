/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:50:55 by rvrignon          #+#    #+#             */
/*   Updated: 2023/02/02 15:40:55 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
    
    int         numbers[]       = {10, 20, 30, 56, 85};
    std::string strings[]       = {"hjkdf", "dskj", "dsjkf"};
    char        characters[]    = {'d', 'e', 'f'};
    float       flotnb[]        = {42.0f, 1.2f, 985.894f};
    
    iter(numbers, sizeof(numbers)/sizeof(numbers[0]), &print<int>);
    std::cout << std::endl;
    iter(strings, sizeof(strings)/sizeof(strings[0]), &print<std::string>);
    std::cout << std::endl;
    iter(characters, sizeof(characters)/sizeof(characters[0]), &print<char>);
    std::cout << std::endl;
    iter(flotnb, sizeof(flotnb)/sizeof(flotnb[0]), &print<float>);   
    
    return (0);
}