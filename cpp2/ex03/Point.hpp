/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 02:31:54 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/07 16:53:32 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
private:
    Fixed const _x;
    Fixed const _y;
public:
    Point();
    ~Point();
    Point(const Point& p);
    Point& operator=(const Point& p);
    Point(const float x, const float y);
    float getX() const;
    float getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);