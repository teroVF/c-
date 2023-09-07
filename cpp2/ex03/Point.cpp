/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 05:50:43 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/07 01:57:16 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::~Point() {}

Point::Point(const Point& p) : _x(p._x), _y(p._y) {}

Point& Point::operator=(const Point& p)
{
    Point *tmp = new Point(p);
    return *tmp;
}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Fixed Point::getX() const
{
    return this->_x;
}

Fixed Point::getY() const
{
    return this->_y;
}
