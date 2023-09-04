/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:45:52 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/04 12:16:12 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(int const number)
{
    this->_value = number;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(float const number)
{
    this->_value = number
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy Constructor was called" << std::endl;
    *this = f;
}

Fixed &Fixed::operator=(const Fixed &f)
{
    std::cout << "Copy assignment operator called " << std::endl;
    this->_value = f.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const;
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

int Fixed::toInt( void ) const
{
    return (this->_value);
}

float Fixed::toFloat( void ) const
{
    return (this->_value);
}

std::ostream &operator<<(std::ostream &os, const Fixed &number)
{
    os << number.toFloat();
    return os;
}
