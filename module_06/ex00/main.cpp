/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:40:31 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/26 01:23:46 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool is_int(char *str) {
    if (atol(str) > INT_MAX || atol(str) < INT_MIN)
        return false;
    for(int i = 0; str[i]; i++) {
        if (i == 0 && str[i] == '-')
            i++;
        else if (!isdigit(str[i]))
            return false;
    }
    return true;
}

bool is_char(char *str) {
    if (strlen(str) == 1)
        return true;
    return false;
}

bool is_double(char *str) {
    int dot = 0;
    
    for(int i = 0; str[i]; i++) {
        if (i == 0 && str[i] == '-')
            i++;
        else if (str[i] == '.') {
            if (dot == 1)
                return false;
            else 
                dot++;   
        }
        else if (!isdigit(str[i]))
            return false;
    }
    if (dot == 0 && ((atol(str) > INT_MAX && atol(str) < DBL_MAX) || (atol(str) < INT_MIN && atol(str) > DBL_MIN)))
        return true;
    else if (dot == 1)
        return true;
    return false;
}

bool is_float(char *str) {
    int dot = 0;
    size_t f = 0;
    
    for(int i = 0; str[i]; i++) {
        if (i == 0 && str[i] == '-')
            i++;
        else if (str[i] == '.') {
            if (dot == 1)
                return false;
            else 
                dot++;   
        }
        else if (str[i] == 'f' && f == 0)
            f = i;
        else if (!isdigit(str[i]))
            return false;
    }
    if (dot == 0)
        return false;
    else if (f == strlen(str) - 1)
        return true;
    return false;
}

bool is_inf(std::string str) {
    if (!str.compare("-inf") || !str.compare("-inff") || !str.compare("+inff") || !str.compare("+inf"))
        return (true);
    return false;
}

bool is_nan(std::string str) {
    if (!str.compare("nan") || !str.compare("nanf"))
        return (true);
    return false;
}

int main(int ac, char **av) {
    if (ac != 2)
        return (0);
    
    std::string str = av[1];
    if (is_inf(av[1]))
        displayInf(av[1]);
    else if (is_nan(av[1]))
        displayNan(av[1]);
    else if (is_int(av[1]))
        convert_int(atoi(av[1]));
    else if (is_char(av[1]))
        convert_char(str);
    else if (is_double(av[1]))
        convert_double(std::atof(av[1]));
    else if (is_float(av[1]))
        convert_float(std::atof(av[1]));
    else
        std::cout << "Error" << std::endl;
    return (0);
}