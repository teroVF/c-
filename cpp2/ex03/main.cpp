/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 02:22:09 by anvieira          #+#    #+#             */
/*   Updated: 2023/10/13 02:07:12 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    // Point a(0, 0);
    // Point b(0, 4);
    // Point c(4, 0);

    // Point a(2, 1);
    // Point b(2, 3);
    // Point c1(3, 9);

    // Point a(2, 1);
    // Point b(2, 3);
    // Point c(3, 2);
    
    // Point a(0, 9);
    // Point b(0, 6);
    // Point c(0, 3);
    
    // Point a(4, 9);
    // Point b(4, 2);
    // Point c(4, 0);
    
    // Point a(4, 4);
    // Point b(4, 4);
    // Point c(4, 4);

    Point a(4, 3);
    Point b(0, 0);
    Point c(-4, 3);
    
    Point point1(2, 2);
    Point point2(1, 1);
    Point point3(3, 3);
    Point point4(0, 0);
    Point point5(0, 4);
    Point point6(4, 0);
    Point point7(2, 3);
    Point point8(3, 2);
    Point point9(2, 4);
    Point point10(4, 2);
    Point point11(2, 0);
    Point point12(0, 2);
    Point point13(4, 4);
    Point point14(-1, -1);
    Point point15(5, 5);
    Point point16(0.5f, 0.5f);
    Point point17(1.9f, 1.9f);
    Point point18(2.01, 2.01);
    Point point19(1.9999f, 1.9999f);

    std::cout << "POINT 19 X: " << point19.getXFixed() << std::endl;
    std::cout << "POINT 19 Y: " << point19.getYFixed() << std::endl;

    //
    std::cout<< "POINT 1: " << std::endl;
    std::cout << bsp(a, b, c, point1) << std::endl;
    std::cout<< "POINT 2: " << std::endl;
    std::cout << bsp(a, b, c, point2) << std::endl;
    std::cout<< "POINT 3: " << std::endl; 
    std::cout << bsp(a, b, c, point3) << std::endl;
    std::cout<< "POINT 4: " << std::endl;
    std::cout << bsp(a, b, c, point4) << std::endl;
    std::cout<< "POINT 5: " << std::endl; 
    std::cout << bsp(a, b, c, point5) << std::endl;
    std::cout<< "POINT 6: " << std::endl; 
    std::cout << bsp(a, b, c, point6) << std::endl;
    std::cout<< "POINT 7: " << std::endl; 
    std::cout << bsp(a, b, c, point7) << std::endl;
    std::cout<< "POINT 8: " << std::endl;
    std::cout << bsp(a, b, c, point8) << std::endl;
    std::cout<< "POINT 9: " << std::endl; 
    std::cout << bsp(a, b, c, point9) << std::endl;
    std::cout<< "POINT 10: " << std::endl; 
    std::cout << bsp(a, b, c, point10) << std::endl;
    std::cout<< "POINT 11: " << std::endl; 
    std::cout << bsp(a, b, c, point11) << std::endl;
    std::cout<< "POINT 12: " << std::endl; 
    std::cout << bsp(a, b, c, point12) << std::endl;
    std::cout<< "POINT 13: " << std::endl; 
    std::cout << bsp(a, b, c, point13) << std::endl;
    std::cout<< "POINT 14: " << std::endl; 
    std::cout << bsp(a, b, c, point14) << std::endl;
    std::cout<< "POINT 15: " << std::endl; 
    std::cout << bsp(a, b, c, point15) << std::endl;
    std::cout<< "POINT 16: " << std::endl; 
    std::cout << bsp(a, b, c, point16) << std::endl;
    std::cout<< "POINT 17: " << std::endl;
    std::cout << bsp(a, b, c, point17) << std::endl;
    std::cout<< "POINT 18: " << std::endl;
    std::cout << bsp(a, b, c, point18) << std::endl;
    std::cout<< "POINT 19: " << std::endl;
    std::cout << bsp(a, b, c, point19) << std::endl;
    
    return 0;
}