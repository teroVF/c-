/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:45:48 by anvieira          #+#    #+#             */
/*   Updated: 2023/10/11 20:48:30 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed {
private:
    int                _value; //integer to store fixed point number
    static const int   _bits; //to store the number of fractional bits
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &f);
    Fixed& operator=(const Fixed& f);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif

/*
** The Fixed class represents a fixed point number with 8 bits of fractional part.
** It has a private integer variable to store the fixed point number and a static constant integer to store the number of fractional bits.
** The class provides a default constructor, a destructor, a copy constructor, an assignment operator overload, a getter and a setter for the raw bits.
*/
