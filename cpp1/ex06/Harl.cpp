/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:19:23 by anvieira          #+#    #+#             */
/*   Updated: 2023/08/30 01:41:19 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl() {}

void Harl::debug( void )
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << _DEBUG << std::endl;
}

void Harl::info( void )
{
    std::cout << "[INFO]" << std::endl;
    std::cout << _INFO << std::endl;
}
void Harl::warning( void )
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << _WARNING << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << _ERROR << std::endl;
}

void Harl::complain( string level )
{
    void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4)
    {
        if (levels[i] == level)
            break;
        i++;
    }
    switch (i)
    {
        case 0:
            (this->*f[0])();
            std::cout << std::endl;
        case 1:
            (this->*f[1])();
            std::cout << std::endl;
        case 2:
            (this->*f[2])();
            std::cout << std::endl;
        case 3:
            (this->*f[3])();
            std::cout << std::endl;
            break;
        default:
            std::cout << "[Probably complaining about insignificant problems]" << std::endl;
            break;
    }
}
