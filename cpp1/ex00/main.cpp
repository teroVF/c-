/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 03:35:43 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/19 03:35:36 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;
    Zombie zombie3("Michael Anthony");
    Zombie *zombie4 = new Zombie("Eddie Van Halen");
    
    zombie4->announce();
    zombie = newZombie("Jesse James");
    zombie->announce();
    zombie->announce();
    randomChump("Zombie 2");
    zombie3.announce();
    delete zombie;
    delete zombie4;
    return (0);
}
