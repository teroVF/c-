/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:45:48 by anvieira          #+#    #+#             */
/*   Updated: 2023/10/11 21:32:06 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>

class Fixed
/**
 * @brief The Fixed class represents a fixed point number with 8 bits of fractional part.
 * 
 */
class Fixed {
private:
    int                _value; //integer to store fixed point number
    static const int   _bits = 8; //to store the number of fractional bits
public:

    /**
     * @brief Construct a new Fixed object from an integer.
     * 
     * @param number The integer to be converted to a fixed point number.
     */
    Fixed(int const number);

    /**
     * @brief Construct a new Fixed object from a float.
     * 
     * @param number The float to be converted to a fixed point number.
     */
    Fixed(float const number);

    /**
     * @brief Construct a new Fixed object.
     * 
     */
    Fixed();

    /**
     * @brief Construct a new Fixed object from another Fixed object.
     * 
     * @param f The Fixed object to be copied.
     */
    Fixed(const Fixed &f);

    /**
     * @brief Destroy the Fixed object.
     * 
     */
    ~Fixed();

    /**
     * @brief Assigns the value of another Fixed object to this object.
     * 
     * @param f The Fixed object to be assigned.
     * @return Fixed& A reference to this Fixed object.
     */
    Fixed&  operator=(const Fixed& f);

    /**
     * @brief Adds two Fixed objects.
     * 
     * @param f The Fixed object to be added.
     * @return Fixed The result of the addition.
     */
    Fixed   operator+(const Fixed& f) const;

    /**
     * @brief Subtracts two Fixed objects.
     * 
     * @param f The Fixed object to be subtracted.
     * @return Fixed The result of the subtraction.
     */
    Fixed   operator-(const Fixed& f) const;

    /**
     * @brief Multiplies two Fixed objects.
     * 
     * @param f The Fixed object to be multiplied.
     * @return Fixed The result of the multiplication.
     */
    Fixed   operator*(const Fixed& f) const;

    /**
     * @brief Divides two Fixed objects.
     * 
     * @param f The Fixed object to be divided.
     * @return Fixed The result of the division.
     */
    Fixed   operator/(const Fixed& f) const;

    /**
     * @brief Prefix increment operator.
     * 
     * @return Fixed& A reference to this Fixed object.
     */
    Fixed&  operator++(void);

    /**
     * @brief Postfix increment operator.
     * 
     * @param int Dummy parameter to differentiate from prefix increment operator.
     * @return Fixed The value of this Fixed object before the increment.
     */
    Fixed   operator++(int);

    /**
     * @brief Prefix decrement operator.
     * 
     * @return Fixed& A reference to this Fixed object.
     */
    Fixed&  operator--(void);

    /**
     * @brief Postfix decrement operator.
     * 
     * @param int Dummy parameter to differentiate from prefix decrement operator.
     * @return Fixed The value of this Fixed object before the decrement.
     */
    Fixed   operator--(int);

    /**
     * @brief Greater than operator.
     * 
     * @param f The Fixed object to be compared.
     * @return true If this Fixed object is greater than the other.
     * @return false Otherwise.
     */
    bool    operator>(const Fixed& f) const;

    /**
     * @brief Less than operator.
     * 
     * @param f The Fixed object to be compared.
     * @return true If this Fixed object is less than the other.
     * @return false Otherwise.
     */
    bool    operator<(const Fixed& f) const;

    /**
     * @brief Greater than or equal to operator.
     * 
     * @param f The Fixed object to be compared.
     * @return true If this Fixed object is greater than or equal to the other.
     * @return false Otherwise.
     */
    bool    operator>=(const Fixed& f) const;

    /**
     * @brief Less than or equal to operator.
     * 
     * @param f The Fixed object to be compared.
     * @return true If this Fixed object is less than or equal to the other.
     * @return false Otherwise.
     */
    bool    operator<=(const Fixed& f) const;

    /**
     * @brief Returns the minimum of two Fixed objects.
     * 
     * @param f1 The first Fixed object.
     * @param f2 The second Fixed object.
     * @return Fixed& A reference to the minimum Fixed object.
     */
    static Fixed& min(Fixed& f1, Fixed& f2);

    /**
     * @brief Returns the minimum of two constant Fixed objects.
     * 
     * @param f1 The first constant Fixed object.
     * @param f2 The second constant Fixed object.
     * @return const Fixed& A reference to the minimum constant Fixed object.
     */
    static const Fixed& min(const Fixed& f1, const Fixed& f2);

    /**
     * @brief Returns the maximum of two Fixed objects.
     * 
     * @param f1 The first Fixed object.
     * @param f2 The second Fixed object.
     * @return Fixed& A reference to the maximum Fixed object.
     */
    static Fixed& max(Fixed& f1, Fixed& f2);

    /**
     * @brief Returns the maximum of two constant Fixed objects.
     * 
     * @param f1 The first constant Fixed object.
     * @param f2 The second constant Fixed object.
     * @return const Fixed& A reference to the maximum constant Fixed object.
     */
    static const Fixed& max(const Fixed& f1, const Fixed& f2);

    /**
     * @brief Returns the raw value of the Fixed object.
     * 
     * @return int The raw value of the Fixed object.
     */
    int     getRawBits( void ) const;

    /**
     * @brief Sets the raw value of the Fixed object.
     * 
     * @param raw The raw value to be set.
     */
    void    setRawBits( int const raw );

    /**
     * @brief Converts the Fixed object to a float.
     * 
     * @return float The float value of the Fixed object.
     */
    float   toFloat( void ) const;

    /**
     * @brief Converts the Fixed object to an integer.
     * 
     * @return int The integer value of the Fixed object.
     */
    int     toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif
