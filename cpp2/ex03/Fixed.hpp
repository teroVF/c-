/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:45:48 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/20 01:51:55 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>

class Fixed
{
private:
    int                _value; //integer to store fixed point number
    static const int   _bits = 8; //to store the number of fractional bits
public:
    /* Constructors */
    Fixed(int const number);
    Fixed(float const number);
    Fixed();
    Fixed(const Fixed &f);
    /* Destructor */
    ~Fixed();
    
    /* Operators */
    Fixed&  operator=(const Fixed& f);
    Fixed   operator+(const Fixed& f) const;
    Fixed   operator-(const Fixed& f) const;
    Fixed   operator*(const Fixed& f) const;
    Fixed   operator/(const Fixed& f) const;
    // < > <= >= == !=
    bool    operator>(const Fixed& f) const;
    bool    operator<(const Fixed& f) const;
    bool    operator>=(const Fixed& f) const;
    bool    operator<=(const Fixed& f) const;
    bool    operator==(const Fixed& f) const;
    bool    operator!=(const Fixed& f) const;
    Fixed&  operator++(void);
    Fixed   operator++(int);
    Fixed&  operator--(void);
    Fixed   operator--(int);
    
    /* Methods */
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;

    /* Static Methods */
    static Fixed&       min(Fixed& f1, Fixed& f2);
    static const Fixed& min(const Fixed& f1, const Fixed& f2);
    
    static Fixed&       max(Fixed& f1, Fixed& f2);
    static const Fixed& max(const Fixed& f1, const Fixed& f2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif
