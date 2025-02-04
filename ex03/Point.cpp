/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:54:16 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/03 21:54:18 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

Point::Point(void) : _x(0) , _y(0)
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::~Point(void)
{
}

Point::Point(const Point &copy): _x(copy.getX()), _y(copy.getY())
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Point &Point::operator=(const Point &src)
{
	//std::cout << "Copy Assignement operator called" << std::endl;
	if (this == &src)
		return *this;
	return *this;
}

const Fixed &Point::getX(void)const
{
    return (this->_x);
}

const Fixed &Point::getY(void)const
{
    return (this->_y);
}

