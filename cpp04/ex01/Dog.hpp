/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 01:58:13 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/24 02:22:48 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog(/* args */);
    ~Dog();
    Dog(const Dog& obj);
    Dog& operator=(const Dog& obj);
    
    void makeSound() const;
};