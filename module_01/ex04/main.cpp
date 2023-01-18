/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:38:51 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/18 10:21:30 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Not enough arguments" << std::endl;
		return (0);
	}

	std::string filein = av[1];
	std::ifstream ifs(av[1]);
	std::stringstream buffer;
	buffer << ifs.rdbuf();
	std::string contents(buffer.str());
	std::cout << "Numbers of caracters of " << contents << " : " << contents.length() << std::endl;
	
	std::cout << "Parcourons le texte caractere par caractere" << std::endl;
	std::size_t i = 0;	
	while (i < contents.length())
	{
		std::cout << contents[i];
		i++;
	}

	std::cout << std::endl << "Verifions les parametres :" << std::endl;
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string fileout = filein.append(".replace");
	std::cout << "s1 : " << s1 << std::endl << "s2 : " << s2 << std::endl << "fileout : " << fileout << std::endl;
	
	ifs.close();

	//-----------------------

	std::ofstream ofs("replace.txt");
	ofs << "Yo man" << std::endl;
	ofs.close();
	
	return (0);
}