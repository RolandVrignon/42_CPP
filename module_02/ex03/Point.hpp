/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:15:46 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/18 18:56:57 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#ifndef POINT_H
# define POINT_H

class Point {
	public:
		Point();
        Point(const Point &other);
		Point(const Fixed x, const Fixed y);
		Point &operator=(const Point &other);
		~Point();
		Fixed get_x() const;
		Fixed get_y() const;
	private:
		Fixed _x;
		Fixed _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif