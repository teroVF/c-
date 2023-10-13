/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 01:54:06 by anvieira          #+#    #+#             */
/*   Updated: 2023/10/13 02:33:15 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed fixed_abs(Fixed const &f)
{
    return (f < 0 ? f * (-1) : f);
}

static bool is_on_edge(Point p1, Point p2, Point point)
{
    if (p1.getXFixed() == p2.getXFixed())
        return (point.getXFixed() == p1.getXFixed());
   
    Fixed m = (p2.getYFixed() - p1.getYFixed()) / (p2.getXFixed() - p1.getXFixed());
    Fixed b = p1.getYFixed() - m * p1.getXFixed();
    Fixed y = m * point.getXFixed() + b;
    return (y == point.getYFixed());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{   
    //a 
    Fixed a_x = a.getXFixed();
    Fixed a_y = a.getYFixed();
    //b
    Fixed b_x = b.getXFixed();
    Fixed b_y = b.getYFixed();
    //c
    Fixed c_x = c.getXFixed();
    Fixed c_y = c.getYFixed();
    //point
    Fixed point_x = point.getXFixed();
    Fixed point_y = point.getYFixed();
    
    if (a_x == b_x && a_x == c_x)
        return false;

    if (is_on_edge(a, b, point ) || is_on_edge(a, c, point) 
        || is_on_edge(b, c, point))
        return false;
    
    // area of triangle abc
    Fixed a_abc = Fixed(0.5f) * fixed_abs(a_x * (b_y - c_y) + b_x * (c_y - a_y) + c_x * (a_y - b_y));
    Fixed a_abp = Fixed(0.5f) * fixed_abs(a_x * (b_y - point_y) + b_x * (point_y - a_y) + point_x * (a_y - b_y));
    Fixed a_acp = Fixed(0.5f) * fixed_abs(a_x * (point_y - c_y) + point_x * (c_y - a_y) + c_x * (a_y - point_y));
    Fixed a_bcp = Fixed(0.5f) * fixed_abs(point_x * (b_y - c_y) + b_x * (c_y - point_y) + c_x * (point_y - b_y));
    
    return a_abc == (a_abp + a_acp + a_bcp);
}
