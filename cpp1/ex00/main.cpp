/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 03:35:43 by anvieira          #+#    #+#             */
/*   Updated: 2023/08/26 16:19:25 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;
    Zombie zombie3("Michael Anthony");
    Zombie *zombie4 = new Zombie("Eddie Van Halen sdsdsdsd s sd sd sd sd  sd sd sd sd");
    
    zombie4->announce();
    zombie = newZombie("Jesse James");
    zombie->announce();
    zombie->announce();
    delete zombie;
    randomChump("Zombie 2");
    zombie3.announce();
    delete zombie4;
    return (0);
}