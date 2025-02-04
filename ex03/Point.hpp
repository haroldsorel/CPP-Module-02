/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:54:30 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/03 21:54:31 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed _x;
        const Fixed _y;
    public:
        Point(void);
        Point(const float x, const float y);
        ~Point(void);
        Point(const Point &copy);

        Point &operator=(const Point &src);

        const Fixed &getX(void)const;
        const Fixed &getY(void)const;
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

