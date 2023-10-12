/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:45:52 by anvieira          #+#    #+#             */
/*   Updated: 2023/10/11 21:16:12 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(int const number)
{
    this->_value = number * (1 << this->_bits);
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const number)
{
    this->_value = (int)roundf(number * float(1 << this->_bits));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed()
{
    this->_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
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

int Fixed::getRawBits(void) const
{
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

int Fixed::toInt( void ) const
{
    return (this->_value >> this->_bits);
}

float Fixed::toFloat( void ) const
{
    return ((float)this->_value / (1 << this->_bits));
}

std::ostream &operator<<(std::ostream &os, const Fixed &number)
{
    os << number.toFloat();
    return os;
}

