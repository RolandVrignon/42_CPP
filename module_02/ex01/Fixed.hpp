/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:52:54 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/18 15:16:09 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cmath>
#include <ostream>

#ifndef FIXED_H
# define FIXED_H

class Fixed {
public:
    // Constructor
    Fixed();
    Fixed(const Fixed &other);	
    Fixed(int const value);
    Fixed(float const value);
    Fixed &operator=(const Fixed &other);

    // Destructor
    ~Fixed();

    // Member Functions
    int getRawBits() const;
    void setRawBits(int const raw);
	float toFloat() const;
    int toInt() const;

private:
    int _value;
    static const int _kPrecision = 8;
};

std::ostream& operator<<(std::ostream &out, Fixed const &fixed);

#endif
