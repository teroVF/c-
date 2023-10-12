/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 05:50:43 by anvieira          #+#    #+#             */
/*   Updated: 2023/10/12 00:26:27 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::~Point() {
    //std::cout << "Point destroyed" << std::endl;
}

Point::Point(const Point& p) : _x(p._x), _y(p._y) {
    //std::cout << "Point copied" << std::endl;
}

Point& Point::operator=(const Point& p) {
    (Fixed) this->_x = p._x;
    (Fixed) this->_y = p._y;
    return *this;
}

Point::Point(const float x, const float y) : _x(x), _y(y) {
    //std::cout << "Point created" << std::endl;
}

float Point::getX() const
{
    return this->_x.toFloat();
}

float Point::getY() const
{
    return this->_y.toFloat();
}
