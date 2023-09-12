/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:59:58 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/10 16:14:55 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
protected:
    std::string _name;
    int _hit_points;
    int _energy_points;
    int _attack_damage;
public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap(const ClapTrap& obj);
    ClapTrap& operator=(const ClapTrap& obj);
    ClapTrap(const std::string& name);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
