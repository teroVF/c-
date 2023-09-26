/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 00:37:58 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/26 01:53:42 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon(void) {}

std::string const &Weapon::getType(void)
{
    return (this->type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}