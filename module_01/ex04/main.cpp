/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:38:51 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/18 12:00:51 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

std::string replace(std::string contents, int found, std::string s1, std::string s2)
{
	std::string a_std_string;
	std::string b_std_string;
	std::size_t length;
	size_t		foundt = found;
	
	// Si l'occurence est trouve apres le debut alors on initialize le debut sous a_std_string
	if (foundt > 0)
	{
		char a_char_array[found + 1];
		length = contents.copy(a_char_array, found, 0);
		a_char_array[length] = '\0';
		a_std_string = a_char_array;
	}
	// Si l'occurence n'est pas la fin du contenu du texte, alors on initialize le texte apres l'occurence sous b_std_string
	if (foundt < contents.length() - s1.length())
	{
		char b_char_array[contents.length() - found - s1.length()];
		length = contents.copy(b_char_array, contents.length() - found - s1.length(), found + s1.length());
		b_char_array[length] = '\0';
		b_std_string = b_char_array;
	}
	
	// Occurence trouver au debut, on concatene s2 et le reste
	if (foundt == 0)
	{
		a_std_string = s2;
		a_std_string.append(b_std_string);
	}
	// Occurence trouver a la fin, on concatene le debut et s2
	else if (foundt == contents.length() - s1.length())
	{
		b_std_string = s2;
		a_std_string.append(b_std_string);
	}
	// Occurence trouver au milieu, on concatene le debut, s2 et la fin
	else
	{
		a_std_string.append(s2).append(b_std_string);
	}
	return (a_std_string);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Not enough arguments" << std::endl;
		return (0);
	}

	// Read file 
	std::ifstream ifs(av[1]);
	std::stringstream buffer;
	buffer << ifs.rdbuf();
	std::string contents(buffer.str());
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string filein = av[1];
	std::string fileout = filein.append(".replace");
	std::size_t found = contents.find(av[2], 0, 2);
	while (found != std::string::npos)
	{
		contents = replace(contents, found, s1, s2);
		found = contents.find(av[2], found + 1, s1.length());
	}
	ifs.close();

	// Write in output file the new content
	std::ofstream ofs(fileout.c_str());
	ofs << contents << std::endl;
	ofs.close();
	
	return (0);
}