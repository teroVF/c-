/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 03:35:43 by anvieira          #+#    #+#             */
/*   Updated: 2023/08/27 03:24:26 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdio.h>

int main(void)
{
    Zombie *zombie;
    int N = 4;
    std::string name = "Joao";

    zombie = zombieHorde(N, name);
    for (int i = 0; i < N; i++)
        zombie[i].announce();
    delete [] zombie;
    
}