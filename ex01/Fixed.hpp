/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:18:03 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/03 16:18:04 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _fp_value;
        static const int _frac_bits;
    public:
        Fixed();
        Fixed(const int input);
        Fixed(const float input);
        Fixed(const Fixed &copy);
        ~Fixed();

        Fixed &operator=(const Fixed &src);

        int getRawBits(void)const;
        void setRawBits(int const raw);

        float   toFloat(void)const;
        int     toInt(void)const;
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);