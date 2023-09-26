/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 03:34:47 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/26 02:41:58 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
    this->name = name;
}

Zombie::Zombie( void )
{
    this->name = "default";
}

Zombie::~Zombie( void )
{
    std::cout << this->name << " passed away" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie( std::string name )
{
    Zombie *zombie = new Zombie(name);
    return (zombie);
}

void    randomChump( std::string name )
{
    Zombie zombie(name);
    zombie.announce();
}
