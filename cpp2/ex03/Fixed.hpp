/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 02:45:48 by anvieira          #+#    #+#             */
/*   Updated: 2023/10/12 00:06:46 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>

/**
 * @file Fixed.hpp
 * @brief This file contains the declaration of the Fixed class, which represents a fixed point number.
 */

/**
 * @class Fixed
 * @brief Represents a fixed point number.
 */
class Fixed {
private:
    int                _value; //integer to store fixed point number
    static const int   _bits = 8; //to store the number of fractional bits
public:
    /* Constructors */
    /**
     * @brief Constructs a new Fixed object from an integer.
     * 
     * @param number The integer to convert to a fixed point number.
     */
    Fixed(int const number);
    /**
     * @brief Constructs a new Fixed object from a float.
     * 
     * @param number The float to convert to a fixed point number.
     */
    Fixed(float const number);
    /**
     * @brief Constructs a new default Fixed object.
     */
    Fixed();
    /**
     * @brief Constructs a new Fixed object from an existing Fixed object.
     * 
     * @param f The Fixed object to copy.
     */
    Fixed(const Fixed &f);
    /* Destructor */
    /**
     * @brief Destroys the Fixed object.
     */
    ~Fixed();
    
    /* Operators */
    /**
     * @brief Assigns the value of an existing Fixed object to this Fixed object.
     * 
     * @param f The Fixed object to copy.
     * @return Fixed& A reference to this Fixed object.
     */
    Fixed&  operator=(const Fixed& f);
    /**
     * @brief Adds two Fixed objects together.
     * 
     * @param f The Fixed object to add to this Fixed object.
     * @return Fixed The sum of the two Fixed objects.
     */
    Fixed   operator+(const Fixed& f) const;
    /**
     * @brief Subtracts a Fixed object from this Fixed object.
     * 
     * @param f The Fixed object to subtract from this Fixed object.
     * @return Fixed The difference between the two Fixed objects.
     */
    Fixed   operator-(const Fixed& f) const;
    /**
     * @brief Multiplies two Fixed objects together.
     * 
     * @param f The Fixed object to multiply with this Fixed object.
     * @return Fixed The product of the two Fixed objects.
     */
    Fixed   operator*(const Fixed& f) const;
    /**
     * @brief Divides this Fixed object by another Fixed object.
     * 
     * @param f The Fixed object to divide this Fixed object by.
     * @return Fixed The quotient of the two Fixed objects.
     */
    Fixed   operator/(const Fixed& f) const;
    /**
     * @brief Checks if this Fixed object is greater than another Fixed object.
     * 
     * @param f The Fixed object to compare to this Fixed object.
     * @return true If this Fixed object is greater than the other Fixed object.
     * @return false If this Fixed object is not greater than the other Fixed object.
     */
    bool    operator>(const Fixed& f) const;
    /**
     * @brief Checks if this Fixed object is less than another Fixed object.
     * 
     * @param f The Fixed object to compare to this Fixed object.
     * @return true If this Fixed object is less than the other Fixed object.
     * @return false If this Fixed object is not less than the other Fixed object.
     */
    bool    operator<(const Fixed& f) const;
    /**
     * @brief Checks if this Fixed object is greater than or equal to another Fixed object.
     * 
     * @param f The Fixed object to compare to this Fixed object.
     * @return true If this Fixed object is greater than or equal to the other Fixed object.
     * @return false If this Fixed object is not greater than or equal to the other Fixed object.
     */
    bool    operator>=(const Fixed& f) const;
    /**
     * @brief Checks if this Fixed object is less than or equal to another Fixed object.
     * 
     * @param f The Fixed object to compare to this Fixed object.
     * @return true If this Fixed object is less than or equal to the other Fixed object.
     * @return false If this Fixed object is not less than or equal to the other Fixed object.
     */
    bool    operator<=(const Fixed& f) const;
    /**
     * @brief Checks if this Fixed object is equal to another Fixed object.
     * 
     * @param f The Fixed object to compare to this Fixed object.
     * @return true If this Fixed object is equal to the other Fixed object.
     * @return false If this Fixed object is not equal to the other Fixed object.
     */
    bool    operator==(const Fixed& f) const;
    /**
     * @brief Checks if this Fixed object is not equal to another Fixed object.
     * 
     * @param f The Fixed object to compare to this Fixed object.
     * @return true If this Fixed object is not equal to the other Fixed object.
     * @return false If this Fixed object is equal to the other Fixed object.
     */
    bool    operator!=(const Fixed& f) const;
    /**
     * @brief Increments this Fixed object by 1.
     * 
     * @return Fixed& A reference to this Fixed object.
     */
    Fixed&  operator++(void);
    /**
     * @brief Increments this Fixed object by 1.
     * 
     * @param int An unused parameter to differentiate this operator from the prefix increment operator.
     * @return Fixed The value of this Fixed object before it was incremented.
     */
    Fixed   operator++(int);
    /**
     * @brief Decrements this Fixed object by 1.
     * 
     * @return Fixed& A reference to this Fixed object.
     */
    Fixed&  operator--(void);
    /**
     * @brief Decrements this Fixed object by 1.
     * 
     * @param int An unused parameter to differentiate this operator from the prefix decrement operator.
     * @return Fixed The value of this Fixed object before it was decremented.
     */
    Fixed   operator--(int);
    
    /* Methods */
    /**
     * @brief Returns the raw value of the fixed point number.
     * 
     * @return int The raw value of the fixed point number.
     */
    int     getRawBits( void ) const;
    /**
     * @brief Sets the raw value of the fixed point number.
     * 
     * @param raw The raw value to set.
     */
    void    setRawBits( int const raw );
    /**
     * @brief Converts the fixed point number to a float.
     * 
     * @return float The float representation of the fixed point number.
     */
    float   toFloat( void ) const;
    int     toInt( void ) const;
    static Fixed&       min(Fixed& f1, Fixed& f2);
    static const Fixed& min(const Fixed& f1, const Fixed& f2);
    static Fixed&       max(Fixed& f1, Fixed& f2);
    static const Fixed& max(const Fixed& f1, const Fixed& f2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif
