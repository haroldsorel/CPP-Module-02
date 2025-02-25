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

int Fixed::getRawBits(void)const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fp_value);
}
void    Fixed::setRawBits(int const raw)
{
    this->_fp_value = raw;
    std::cout << "setRawBits member function called" << std::endl;
}


Fixed::Fixed() : _fp_value(0)
{
    std::cout << "Default Constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = copy;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "Copy Assignement operator called" << std::endl;
    if (this != &src)
       this->_fp_value = src.getRawBits();
    return (*this);
}
