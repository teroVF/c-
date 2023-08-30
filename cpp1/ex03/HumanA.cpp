/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 00:43:10 by anvieira          #+#    #+#             */
/*   Updated: 2023/08/30 01:57:47 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w) : name(n), weapon(w) {/* void */}

HumanA::~HumanA() {}

void HumanA::attack( void )
{
    std::cout << this->name << " attacks with their " <<  this->weapon.getType() << std::endl;
}