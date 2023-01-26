/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 00:30:43 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/26 01:15:20 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <iostream>

#ifndef CONVERT_HPP
# define CONVERT_HPP

void convert_int(int nb);
void convert_char(std::string str);
void convert_double(double nb);
void convert_float(float nb);

void displayChar(int nb);
void displayNan(std::string str);
void displayInf(std::string str);

# endif