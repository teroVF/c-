/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:59:10 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/10 16:56:55 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    /* TESTING */
    ScavTrap scavTrap("ScavTrap");
    scavTrap.attack("target");
    scavTrap.takeDamage(10);
    scavTrap.beRepaired(10);
    scavTrap.guardGate();

    ClapTrap clapTrap("ClapTrap");
    clapTrap.attack("target");
    clapTrap.takeDamage(10);
    clapTrap.beRepaired(10);
    
    
    return (0);
}