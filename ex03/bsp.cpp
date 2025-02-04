/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:53:55 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/03 21:53:56 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"
#include "Point.hpp"

Fixed   crossProduct(Point const &a, Point const &b, Point const &p)
{
    return ( (b.getX() - a.getX()) * (p.getY() - a.getY()) - (b.getY() - a.getY()) * (p.getX() - a.getX()));
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed cp1 = crossProduct(a, b, point);
    Fixed cp2 = crossProduct(b, c, point);
    Fixed cp3 = crossProduct(c, a, point);
    Fixed zero = Fixed(0);

    return ((cp1 > zero && cp2 > zero && cp3 > zero) || (cp1 < zero && cp2 < zero && cp3 < zero));
}

