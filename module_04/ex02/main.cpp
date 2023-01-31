/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:26:18 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/31 19:27:21 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Global.hpp"

int main()
{

    Test with Abstract Class
    
    const A_Animal error;
    std::cout << error.makeSound() << std::endl;
    std::cout << std::endl;

    
    // Tests to see constructor and destructor order 
    const A_Animal* first = new Dog();
    delete first;

    std::cout << std::endl;
    
    const A_Animal* second = new Cat();
    delete second;
    
    std::cout << std::endl;
    
    // Tests ask by subject 
    A_Animal* animals[10];
    
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < 10; i++) {
        delete animals[i];
    }

    std::cout << std::endl;

    // Test that copy is really deep

    Cat leo;
    leo.setIdea("J'ai envie de pate sheba", 1);
    leo.setIdea("J'ai envie de boire", 2);
    leo.setIdea("En fait non je vais dormir", 3);
    leo.setIdea("Carresses moi maitre", 4);
    std::cout << "   LEO => " << leo.makeSound() << std::endl;
    std::cout << "   LEO => " << leo.getIdea(1) << std::endl;
    std::cout << "   LEO => " << leo.getIdea(2) << std::endl;
    std::cout << "   LEO => " << leo.getIdea(3) << std::endl;
    std::cout << "   LEO => " << leo.getIdea(4) << std::endl;
    Cat jerome;
    jerome = leo;
    std::cout << "   JEROME => " << jerome.makeSound() << std::endl;
    std::cout << "   JEROME => " << jerome.getIdea(1) << std::endl;
    std::cout << "   JEROME => " << jerome.getIdea(2) << std::endl;
    std::cout << "   JEROME => " << jerome.getIdea(3) << std::endl;
    std::cout << "   JEROME => " << jerome.getIdea(4) << std::endl;
    return 0;
}
