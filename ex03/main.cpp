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
#include "Point.hpp"

int main()
{
    Point const a = Point(1.0f, 1.0f);
    Point const b = Point(2.0f, 1.0f);
    Point const c = Point(2.0f, 2.0f);
    Point const p = Point(1.9f, 1.5f);

    std::cout << (int)(bsp(a, b, c, p)) << std::endl;
    return (0);
}