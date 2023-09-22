/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 02:47:38 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/21 03:54:46 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():
    ClapTrap(),
    FragTrap(),
    ScavTrap()
{
    this->name = "Generic Name";
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):
    ClapTrap(name + "_clap_name")
{

    this->name = name;
    FragTrap(name);
    this->_hit_points = FragTrap::_hit_points;
    this->_attack_damage = FragTrap::_attack_damage;
    ScavTrap(name);
    this->_energy_points = ScavTrap::_energy_points;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "My name is " << this->name << " and my ClapTrap name is " << this->_name << std::endl;
    std::cout << "health: " << this->_hit_points << std::endl;
    std::cout << "energy: " << this->_energy_points << std::endl;
    std::cout << "attack: " << this->_attack_damage << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = obj;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
    if (this == &obj)
    return (*this);
    else
    {
        this->name = obj.name;
        this->_name = obj._name;
        this->_hit_points = obj._hit_points;
        this->_energy_points = obj._energy_points;
        this->_attack_damage = obj._attack_damage;
        return (*this);
    }
}
