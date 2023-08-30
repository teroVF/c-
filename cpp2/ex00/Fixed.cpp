/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:45:52 by anvieira          #+#    #+#             */
/*   Updated: 2023/08/30 19:25:44 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(/* args */)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy Constructor was called " << std::endl;
}

Fixed& Fixed::operator=(const Fixed& f)
{
    std::cout << "Assignment operator called " << std::endl;
    return *this;
}


int Fixed::getRawBits( void ) const
{}

void Fixed::setRawBits( int const raw )
{}
