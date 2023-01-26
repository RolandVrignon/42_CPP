/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:50:55 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/26 17:36:09 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
    
    int numbers[] = {10, 20, 30, 56, 85};
    char strings[][10] = {"hjkdf", "dskj", "dsjkf"};
    char characters[] = {'d', 'e', 'f'};
    float flotnb[] = {42.0f, 1.2f, 985.894f};
    
    iter(numbers, sizeof(numbers)/sizeof(numbers[0]), &print);
    std::cout << std::endl;
    iter(strings, sizeof(strings)/sizeof(strings[0]), &print);
    std::cout << std::endl;
    iter(characters, sizeof(characters)/sizeof(characters[0]), &print);
    std::cout << std::endl;
    iter(flotnb, sizeof(flotnb)/sizeof(flotnb[0]), &print);   
    
    return (0);
}