/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 01:54:06 by anvieira          #+#    #+#             */
/*   Updated: 2023/10/12 01:09:21 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static bool is_on_edge(Point p1, Point p2, Point point)
{
    std::cout << "p1 x: " << p1.getX() << std::endl;
    std::cout << "p1 y: " << p1.getY() << std::endl;
    std::cout << "p2 x: " << p2.getX() << std::endl;
    std::cout << "p2 y: " << p2.getY() << std::endl;
    std::cout << "point x: " << point.getX() << std::endl;
    std::cout << "point y: " << point.getY() << std::endl;
    if (p1.getX() == p2.getX())
    {
        if (p1.getY() == point.getY())
            return true;
        if (p2.getY() == point.getY())
            return true;
        if (Fixed::min(p1.getY(), p2.getY()) < point.getY() 
            && Fixed::max(p1.getY(), p2.getY()) > point.getY())
            return true;
    }
    float m = (p2.getY() - p1.getY()) / (p2.getX() - p1.getX());
    std::cout << "m: " << m << std::endl;
    float b = p1.getY() - m * p1.getX();
    std::cout << "b: " << b << std::endl;
    float y = m * point.getX() + b;
    std::cout << "y: " << y << std::endl;
    std::cout << "point y: " << point.getY() << std::endl;
    return y == point.getY();
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float a_x = a.getX();
    float a_y = a.getY();
    float b_x = b.getX();
    float b_y = b.getY();
    float c_x = c.getX();
    float c_y = c.getY();
    float point_x = point.getX();
    float point_y = point.getY();

    if (is_on_edge(a, b, point ) || is_on_edge(a, c, point) 
        || is_on_edge(b, c, point))
        return false;
        
    float a_abc = 0.5 * fabs(a_x * (b_y - c_y) + b_x * (c_y - a_y) + c_x * (a_y - b_y));
    float a_abp = 0.5 * fabs(a_x * (b_y - point_y) + b_x * (point_y - a_y) + point_x * (a_y - b_y));
    float a_acp = 0.5 * fabs(a_x * (point_y - c_y) + point_x * (c_y - a_y) + c_x * (a_y - point_y));
    float a_bcp = 0.5 * fabs(point_x * (b_y - c_y) + b_x * (c_y - point_y) + c_x * (point_y - b_y));
    
    std::cout << "a_abc: " << a_abc << std::endl;
    std::cout << a_abc << " " << a_abp << " " << a_acp << " " << a_bcp << std::endl;
    std::cout << (a_abc == (a_abp + a_acp + a_bcp)) << std::endl;
    return a_abc == (a_abp + a_acp + a_bcp);
}
