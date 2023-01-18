/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:52:54 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/18 16:48:00 by rvrignon         ###   ########.fr       */
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
        // Constructor by overload operator
        Fixed &operator=(const Fixed &other);
        // Destructor
        ~Fixed();
        // Overload arithmetics
        Fixed operator+(const Fixed &other);
        Fixed operator-(const Fixed &other);
        Fixed operator*(const Fixed &other);
        Fixed operator/(const Fixed &other);
        // Overload incrementation / decrementation
        Fixed operator++(void);
        Fixed operator++(int);
        Fixed operator--(void);
        Fixed operator--(int);
        // Overload comparaisons
        bool operator>(Fixed const & other) const;
        bool operator<(Fixed const & other) const;
        bool operator>=(Fixed const & other) const;
        bool operator<=(Fixed const & other) const;
        bool operator==(Fixed const & other) const;
        bool operator!=(Fixed const & other) const;
        // OVERLOADS MAX // MIN
        static Fixed max(Fixed &a, Fixed &b);
        static Fixed max(const Fixed &a, const Fixed &b);
        static Fixed min( Fixed &a,  Fixed &b);
        static Fixed min(const Fixed &a, const Fixed &b);
        // Member Functions
        int getRawBits() const;
        float toFloat() const;
        int toInt() const;
        void setRawBits(int const raw);
    private:
        int _value;
        static const int _kPrecision = 8;
};

std::ostream& operator<<(std::ostream &out, Fixed const &fixed);

#endif
