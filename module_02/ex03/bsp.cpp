/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:15:51 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/18 19:40:34 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed area(Point const a, Point const b, Point const c) {
	Fixed value(a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y()));
	Fixed abs;
	Fixed final;
	if (value < 0)
		abs = (value * -1);
	else
		abs = value;
	final = (abs / 2);
	return (final);
}

bool onEdge(Point A, Point B, Point C, Point P) {
    // Calcule les coefficients directeurs des droites AB, BC et AC
    Fixed m1((B.get_y() - A.get_y()) / (B.get_x() - A.get_x()));
    Fixed m2((C.get_y() - B.get_y()) / (C.get_x() - B.get_x()));
    Fixed m3((A.get_y() - C.get_y()) / (A.get_x() - C.get_x()));

    // Calcule les ordonnées à l'origine pour les droites AB, BC et AC
    Fixed b1(A.get_y() - m1 * A.get_x());
    Fixed b2(B.get_y() - m2 * B.get_x());
    Fixed b3(C.get_y() - m3 * C.get_x());

    // Vérifie si le point P est sur la droite définie par les segments AB, BC et AC
    bool onLine1 = P.get_y() == m1 * P.get_x() + b1;
    bool onLine2 = P.get_y() == m2 * P.get_x() + b2;
    bool onLine3 = P.get_y() == m3 * P.get_x() + b3;

    // Vérifie si le point P est compris entre les points A et B, B et C, ou C et A respectivement
    bool onSegment1 = onLine1 && ((P.get_x() >= A.get_x() && P.get_x() <= B.get_x()) || (P.get_x() >= B.get_x() && P.get_x() <= A.get_x())) && ((P.get_y() >= A.get_y() && P.get_y() <= B.get_y()) || (P.get_y() >= B.get_y() && P.get_y() <= A.get_y()));
    bool onSegment2 = onLine2 && ((P.get_x() >= B.get_x() && P.get_x() <= C.get_x()) || (P.get_x() >= C.get_x() && P.get_x() <= B.get_x())) && ((P.get_y() >= B.get_y() && P.get_y() <= C.get_y()) || (P.get_y() >= C.get_y() && P.get_y() <= B.get_y()));
    bool onSegment3 = onLine3 && ((P.get_x() >= A.get_x() && P.get_x() <= C.get_x()) || (P.get_x() >= C.get_x() && P.get_x() <= A.get_x())) && ((P.get_y() >= A.get_y() && P.get_y() <= C.get_y()) || (P.get_y() >= C.get_y() && P.get_y() <= A.get_y()));

    return (onSegment1 || onSegment2 || onSegment3);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed a1;
	Fixed a2;
	Fixed a3;
	Fixed a_total;

	a_total = area(a, b, c);
	a1 = area(a, point, b);
	a2 = area(b, point, c);
	a3 = area(c, point, a);

	if (a1 + a2 + a3 == a_total)
	{
		if (onEdge(a, b, c, point))
			return (false);
		return (true);
	}
	return (false);
}