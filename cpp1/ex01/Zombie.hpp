/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 03:34:54 by anvieira          #+#    #+#             */
/*   Updated: 2023/08/27 02:28:16 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie() {};
    Zombie( std::string name );
    ~Zombie( void );
    void announce(void);
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );


#endif /* ZOMBIE_HPP */
