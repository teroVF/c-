/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 01:54:06 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/07 03:50:51 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* falta o edge */
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float a_x = a.getX().toFloat();
    float a_y = a.getY().toFloat();
    float b_x = b.getX().toFloat();
    float b_y = b.getY().toFloat();
    float c_x = c.getX().toFloat();
    float c_y = c.getY().toFloat();
    float point_x = point.getX().toFloat();
    float point_y = point.getY().toFloat();

    if (a_x == b_x && a_y == b_y)
        return false;
    if (a_x == c_x && a_y == c_y)
        return false;
    if (point_x == a_x && point_y == a_y)
        return false;
    if (point_x == b_x && point_y == b_y)
        return false;
    if (point_x == c_x && point_y == c_y)
        return false;
    
    float a_abc = 0.5 * fabs(a_x * (b_y - c_y) + b_x * (c_y - a_y) + c_x * (a_y - b_y));
    
    float a_abp = 0.5 * fabs(a_x * (b_y - point_y) + b_x * (point_y - a_y) + point_x * (a_y - b_y));
    
    float a_acp = 0.5 * fabs(a_x * (point_y - c_y) + point_x * (c_y - a_y) + c_x * (a_y - point_y));
    
    float a_bcp = 0.5 * fabs(point_x * (b_y - c_y) + b_x * (c_y - point_y) + c_x * (point_y - b_y));
    
    if (a_abc == (a_abp + a_acp + a_bcp))
        return true;
    return false;
}
