/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:59:10 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/10 00:25:53 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    /* TESTING */
    ClapTrap clap1 ("Gerson");
    for (int i = 0; i != 10; i++)
        clap1.attack("Quim");
    clap1.attack("Quim");
    clap1.takeDamage(5);
    clap1.beRepaired(5);
    clap1.takeDamage(5);
    clap1.takeDamage(5);
    clap1.attack("Quim");
    return (0);
}