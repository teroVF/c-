/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 03:35:43 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/26 02:39:48 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    // dinamic allocation
    std::cout << "Dinamic allocation" << std::endl;
    Zombie *zombie;
    zombie = newZombie("Jesse James");
    zombie->announce();
    Zombie *zombie2 = new Zombie("Eddie Van Halen");
    zombie2->announce();
    
    // static allocation
    std::cout << "Static allocation" << std::endl;
    Zombie zombie3("Michael Anthony");
    zombie3.announce();
    
    // call function with static allocation
    std::cout << "Call function with static allocation" << std::endl;
    randomChump("Ricky Martin");

    //free dinamic allocation
    delete zombie;
    delete zombie2;
    return (0);
}
