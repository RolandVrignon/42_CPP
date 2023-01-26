/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 02:02:02 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/26 02:20:44 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int main() {
	Data		src;
	Data		*dst;
	uintptr_t	raw;

	src.nb = 3;
	raw = serialize(&src);
    std::cout << "adress of src : " << &src << std::endl << "adress of src.nb : " << &src.nb << std::endl << "value of src.nb : " << src.nb << std::endl;
	std::cout << std::endl << "raw data : " << raw << std::endl << std::endl;
	dst = deserialize(raw);
    std::cout << "adress of dst : " << &dst << std::endl << "adress of dst->nb : " << &dst->nb << std::endl << "value of src->nb : " << dst->nb << std::endl;
	return (0);
}