/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:19:23 by anvieira          #+#    #+#             */
/*   Updated: 2023/08/29 22:34:11 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(){}

void Harl::debug( void )
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << DEBUG << std::endl;
}

void Harl::info( void )
{
    std::cout << "[INFO]" << std::endl;
    std::cout << INFO << std::endl;
}
void Harl::warning( void )
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << WARNING << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << ERROR << std::endl;
}

void Harl::complain( string level )
{
    void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4)
    {
        if (levels[i] == level)
            (this->*f[i])();
        i++;
    }
}