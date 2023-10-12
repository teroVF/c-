/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:45:52 by anvieira          #+#    #+#             */
/*   Updated: 2023/10/11 23:59:39 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(int const number)
{
    this->_value = number << this->_bits;
}

Fixed::Fixed(float const number)
{
    this->_value = (int)roundf(number * (1 << this->_bits));
}

Fixed::Fixed()
{
    this->_value = 0;
}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &f)
{
    *this = f;
}

Fixed &Fixed::operator=(const Fixed &f)
{
    this->_value = f.getRawBits();
    return *this;
}

Fixed Fixed::operator+(const Fixed &f) const
{
    return Fixed(this->toFloat() + f.toFloat());
}

Fixed Fixed::operator-(const Fixed &f) const
{
    return Fixed(this->toFloat() - f.toFloat());
}

Fixed Fixed::operator*(const Fixed &f) const
{
    return Fixed(this->toFloat() * f.toFloat());
}

Fixed Fixed::operator/(const Fixed &f) const
{
    return Fixed(this->toFloat() / f.toFloat());
}

Fixed &Fixed::operator++(void)
{
    this->_value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed &Fixed::operator--(void)
{
    this->_value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
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

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1.getRawBits() < f2.getRawBits())
        return f1;
    return f2;
}

bool Fixed::operator>(const Fixed &f) const
{
    return (this->_value > f.getRawBits());
}

bool Fixed::operator<(const Fixed &f) const
{
    return (this->_value < f.getRawBits());
}

bool Fixed::operator>=(const Fixed &f) const
{
    return (this->_value >= f.getRawBits());
}

bool Fixed::operator<=(const Fixed &f) const
{
    return (this->_value <= f.getRawBits());
}


const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if (f1.getRawBits() < f2.getRawBits())
        return f1;
    return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1.getRawBits() > f2.getRawBits())
        return f1;
    return f2;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if (f1.getRawBits() > f2.getRawBits())
        return f1;
    return f2;
}

