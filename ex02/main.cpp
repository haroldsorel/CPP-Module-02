/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:48:43 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/03 19:48:44 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    //Fixed c(2.02f);
    //Fixed d(2.01f);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    //std::cout << "Incs" << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;    

    //std::cout << "Comps" << std::endl;
    //std::cout << (int)(c < d) << std::endl; 
    //std::cout << (int)(c > d) << std::endl; 
    //std::cout << (int)(c <= d) << std::endl; 
    //std::cout << (int)(c >= d) << std::endl; 
    //std::cout << (int)(c == d) << std::endl; 
    //std::cout << (int)(c != d) << std::endl; 

    //std::cout << "Arithms" << std::endl;
    //std::cout << c + d << std::endl;    
    //std::cout << c - d << std::endl;    
    //std::cout << c * d << std::endl;    
    //std::cout << c / d << std::endl;

    //std::cout << "Methods" << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}