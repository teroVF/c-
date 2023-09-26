/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 03:34:54 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/26 02:38:34 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie( std::string name );
    ~Zombie( void );
    void announce( void );
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );
