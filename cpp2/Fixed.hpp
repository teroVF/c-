/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:45:48 by anvieira          #+#    #+#             */
/*   Updated: 2023/08/30 02:50:36 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
    int                _value;
    static const int   _bits = 8;
public:
    Fixed(/* args */);
    ~Fixed();
    // Copy constructor
    // Assignment operator overload
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

Fixed::Fixed(/* args */)
{
}

Fixed::~Fixed()
{
}

#endif