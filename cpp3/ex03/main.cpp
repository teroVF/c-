/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:59:10 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/19 02:10:02 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    /* TESTING */
    ScavTrap scavTrap("ScavTrap");
    scavTrap.attack("target");
    scavTrap.takeDamage(10);
    scavTrap.beRepaired(10);
    scavTrap.guardGate();
    
    FragTrap fragTrap("FragTrap");
    fragTrap.attack("target");
    fragTrap.takeDamage(10);
    fragTrap.beRepaired(10);
    fragTrap.highFivesGuys();
    
    ScavTrap *scavTrap2 = new ScavTrap("ScavTrap2");
    scavTrap2->attack("target");
    scavTrap2->takeDamage(10);
    scavTrap2->beRepaired(10);
    scavTrap2->guardGate();
    delete scavTrap2;
    
    FragTrap *fragTrap2 = new FragTrap("FragTrap2");
    fragTrap2->attack("target");
    fragTrap2->takeDamage(10);
    fragTrap2->beRepaired(10);
    fragTrap2->highFivesGuys();
    delete fragTrap2; 
    return (0);
}
