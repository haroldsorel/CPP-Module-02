/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:17:39 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/03 16:17:41 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

const int Fixed::_frac_bits = 8;


/**
 * Constructors
**/

Fixed::Fixed() : _fp_value(0)
{
    //std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const int input)
{
    //std::cout << "Integer Input Constructor called" << std::endl;
    this->_fp_value = input << this->_frac_bits;
}

Fixed::Fixed(const float input)
{
    //std::cout << "Float Input Constructor called" << std::endl;
    this->_fp_value = roundf(input * (1 << 8));
}

Fixed::Fixed(const Fixed &copy)
{
    //std::cout << "Copy Constructor called" << std::endl;
    *this = copy;
}

/**
 * Destructors
**/

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
}

/**
 * Operator Overload
**/

Fixed &Fixed::operator=(const Fixed &src)
{
    //std::cout << "Copy Assignement operator called" << std::endl;
    if (this != &src)
       this->_fp_value = src.getRawBits();
    return (*this);
}

bool Fixed::operator>(Fixed &src)const
{
    return ((this->toFloat)() > src.toFloat());
}

bool Fixed::operator<(Fixed &src)const
{
     return ((this->toFloat)() < src.toFloat());
}

bool Fixed::operator<=(Fixed &src)const
{
     return ((this->toFloat)() <= src.toFloat());
}

bool Fixed::operator>=(Fixed &src)const
{
    return ((this->toFloat)() >= src.toFloat());
}

bool Fixed::operator==(Fixed &src)const
{
    return ((this->toFloat)() == src.toFloat());
}

bool Fixed::operator!=(Fixed &src)const
{
    return ((this->toFloat)() != src.toFloat());
}

Fixed Fixed::operator+(Fixed src)const
{
    return (this->toFloat() + src.toFloat());
}

Fixed Fixed::operator-(Fixed src)const
{
    return (this->toFloat() - src.toFloat());
}

Fixed Fixed::operator*(Fixed src)const
{
    return (this->toFloat() * src.toFloat());
}

Fixed Fixed::operator/(Fixed src)const
{
    return (this->toFloat() / src.toFloat());
}

Fixed Fixed::operator++(void)
{
    this->_fp_value++;
    return (*this);
}

Fixed Fixed::operator--(void)
{
    this->_fp_value--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
	++this->_fp_value;
	return (temp);
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
	--this->_fp_value;
	return (temp);
}

/**
 * Getters
**/

int Fixed::getRawBits(void)const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->_fp_value);
}

/**
 * Setters
**/

void    Fixed::setRawBits(int const raw)
{
    this->_fp_value = raw;
    //std::cout << "setRawBits member function called" << std::endl;
}

/**
 * Public Methods
**/

float   Fixed::toFloat(void)const
{
    return ((float)this->_fp_value / (float)(1 << this->_frac_bits));
}

int     Fixed::toInt(void)const
{
    return (this->_fp_value >> this->_frac_bits);
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
    if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}
const Fixed &Fixed::min(Fixed const &first, Fixed const &second)
{
    if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
    if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}
const Fixed &Fixed::max(Fixed const &first, const Fixed &second)
{
    if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr)
{
    str << fixed_nbr.toFloat();
    return (str);
}