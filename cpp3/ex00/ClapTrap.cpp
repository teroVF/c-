/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:59:51 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/10 00:26:48 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include <iostream>

ClapTrap::ClapTrap():
    _name("Generic Name"),
    _hit_points(10),
    _energy_points(10),
    _attack_damage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name):
    _name(name),
    _hit_points(10),
    _energy_points(10),
    _attack_damage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj):
    _name(obj._name),
    _hit_points(obj._hit_points),
    _energy_points(obj._energy_points),
    _attack_damage(obj._attack_damage)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    if (this == &obj)
        return (*this);
    this->_name = obj._name;
    this->_hit_points = obj._hit_points;
    this->_energy_points = obj._energy_points;
    this->_attack_damage = obj._attack_damage;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energy_points == 0 || this->_hit_points == 0)
    {
        std::cout << "ClapTrap " << this->_name << " can't attack." << std::endl;
        return ;
    }
    this->_energy_points--;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
        return ;
    }
    this->_hit_points -= amount;
    if (this->_hit_points < 0)
        this->_hit_points = 0;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    if (this->_hit_points == 0)
        std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit_points == 0 || this->_energy_points == 0)
    {
        std::cout << "ClapTrap " << this->_name << " can't be repaired." << std::endl;
        return ;
    }
    this->_hit_points += amount;
    this->_energy_points--;
    if (this->_hit_points > 10)
        this->_hit_points = 10;
    std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " points!" << std::endl;
}