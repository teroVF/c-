/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 01:15:54 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/19 02:09:52 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void):
    ClapTrap()
{
    this->_name = "Generic Name";
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name):
    ClapTrap(name)
{
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj):
    ClapTrap(obj)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this == &obj)
        return (*this);
    this->_name = obj._name;
    this->_hit_points = obj._hit_points;
    this->_energy_points = obj._energy_points;
    this->_attack_damage = obj._attack_damage;
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap has entered in Gate keeper mode" << std::endl;
}
