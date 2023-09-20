/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 02:48:40 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/19 22:37:42 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap

{
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap& obj);
    DiamondTrap& operator=(const DiamondTrap& obj);

    void whoAmI(void);
    
};

DiamondTrap::DiamondTrap(/* args */)
{
}

DiamondTrap::~DiamondTrap()
{
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
    this->name = obj.getName();
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
    this->name = obj.getName();
    return (*this);
}
