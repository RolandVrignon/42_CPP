/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:24:11 by rvrignon          #+#    #+#             */
/*   Updated: 2022/12/06 15:25:46 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j]; j++)
			{
				av[i][j] = toupper(av[i][j]);
				cout << av[i][j];
			}
		}
		cout << endl;
	}
	else
    	cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    return 0;
}