/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:45:48 by anvieira          #+#    #+#             */
/*   Updated: 2023/08/30 19:24:05 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed
{
private:
    int                _value;
    static const int   _bits = 8;
public:
    Fixed();
    ~Fixed();
    // Copy constructor
    Fixed(const Fixed &f);
    Fixed& operator=(const Fixed& f);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif