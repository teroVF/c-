/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 01:39:00 by anvieira          #+#    #+#             */
/*   Updated: 2023/10/11 21:04:07 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <bitset>
#include <iomanip>
 
int main( void )
{
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    a = Fixed( 1234.4321f );
    
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}

// int main ()
// {
//     float const f = 42.42f;
//     std::cout << "binary float: " << std::bitset<32>(*(int *)&f) << std::endl;
//     std::cout << "float: " << f << std::endl;
//     int i = int( f * float(1 << 8));
//     std::cout << "binary int: " << std::bitset<32>(i) << std::endl;
//     std::cout << "int: " << i << std::endl;
//     float div = i/float(1 << 8);
//     std::cout << "bin div: " << std::bitset<32>(*(int *)&div) << std::endl;
//     std::cout << "div: " << div << std::endl;
    
//     // Fixed a;
//     // a = f;
//     // std::cout << "binary: " << std::bitset<32>(a.getRawBits()) << std::endl;
//     // float div = a.getRawBits()/float(1 << 8);
//     // std::cout << "bin div: " << std::bitset<32>(*(int *)&div) << std::endl;
//     // std::cout << std::setprecision(10) << "div: " << div << std::endl;
//     // std::cout << "raw: " << a.getRawBits() << std::endl;
//     // std::cout << "float: " << a.toFloat() << std::endl;
    
// }