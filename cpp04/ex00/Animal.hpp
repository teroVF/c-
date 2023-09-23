/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 02:20:36 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/23 03:54:08 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
protected:
    std::string _type;
public:
    Animal(/* args */);
    ~Animal();
    Animal(const Animal& obj);
    Animal& operator=(const Animal& obj);
        
    Animal(std::string type);
};

