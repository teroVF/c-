/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 03:34:47 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/19 03:19:27 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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

Zombie::Zombie( std::string name )
{
    this->name = name;
}

Zombie::~Zombie( void )
{
    
    std::cout << this->name << " passed away" << std::endl;
}
