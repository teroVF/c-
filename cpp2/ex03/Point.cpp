/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 05:50:43 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/06 05:54:01 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::~Point() {}

Point::Point(const Point& p) : _x(p._x), _y(p._y) {}

Point& Point::operator=(const Point& p)
{
    (void)p;
    return *this;
}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float a_abc;
    float a_abp;
    float a_acp;
    float a_bcp;
    
    if (a_abc == (a_abp + a_acp + a_bcp))
        return true;
    return false;
}