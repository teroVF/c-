/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 02:22:09 by anvieira          #+#    #+#             */
/*   Updated: 2023/10/12 01:01:37 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point a(0, 0);
    Point b(4, 0);
    Point c(0, 4);
    Point p1(2, 2);
    Point p2(3, 3);
    Point p3(1, 1);
    Point p4(0, 0);
    Point p5(4, 4);
    Point p6(2, 3);
    Point p7(3, 2);

    std::cout << bsp(a, b, c, p1) << std::endl; // true
    std::cout << bsp(a, b, c, p2) << std::endl; // false
    std::cout << bsp(a, b, c, p3) << std::endl; // true
    std::cout << bsp(a, b, c, p4) << std::endl; // true
    std::cout << bsp(a, b, c, p5) << std::endl; // true
    std::cout << bsp(a, b, c, p6) << std::endl; // false
    std::cout << bsp(a, b, c, p7) << std::endl; // false

    return 0;
}
