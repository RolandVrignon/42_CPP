/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 02:26:18 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/26 02:31:51 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
	int random;
	
	Base *ptr_base;
	std::srand(std::time(NULL));
	random = rand() % 3;
	
    if (random == 0) {
		std::cout << "Generate A" << std::endl;
		ptr_base = new A;
	} else if (random == 1) {
		std::cout << "Generate B" << std::endl;
		ptr_base = new B;
	} else {
		std::cout << "Generate C" << std::endl;
		ptr_base = new C;
	}
    
	return (ptr_base);
}

void	identify(Base *p)
{
	Base *res;
	
	res = dynamic_cast<A*>(p);
	if (res != NULL)
		std::cout << "ptr = A" << std::endl;
	res = dynamic_cast<B*>(p);
	if (res != NULL)
		std::cout << "ptr = B" << std::endl;
	res = dynamic_cast<C*>(p);
	if (res != NULL)
		std::cout << "ptr = C" << std::endl;
}

void	identify(Base &p)
{
	try {
		Base &a = dynamic_cast<A&>(p);
		std::cout << "ref = A" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << "Ref is not a A" << '\n';
	}
    
	try {
		Base &b = dynamic_cast<B&>(p);
		std::cout << "ref = B" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << "ref is not a B" << '\n';
	}
    
	try {
		Base &c = dynamic_cast<C&>(p);
		std::cout << "ref = C" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << "ref is not a C" << '\n';
	}	
}

int main () {
    Base *ptr_base = generate();
	Base &ref_base = *ptr_base;

	identify(ptr_base);
	identify(ref_base);
	delete (ptr_base);
	return (0);
}