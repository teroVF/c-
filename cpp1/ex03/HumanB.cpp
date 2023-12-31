/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 00:44:50 by anvieira          #+#    #+#             */
/*   Updated: 2023/08/29 21:08:20 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>
#include <string>
#include "cstdio"

HumanB::HumanB(std::string name) : name(name) { this->weapon = NULL; }

HumanB::~HumanB() {};

void HumanB::attack( void )
{
    if (this->weapon == NULL)
        std::cout << this->name << " has no weapon" << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}