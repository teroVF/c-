/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:13:26 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/24 02:23:51 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() :
Animal("Dog")
{
    std::cout << "Dog created" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destroyed" << std::endl;
}

Dog::Dog(const Dog& obj)
{
    this->_type = obj._type;
    std::cout << "Dog created" << std::endl;
}

Dog& Dog::operator= (const Dog& obj)
{
    if (this == &obj)
        return *this;
    this->_type = obj._type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "AU AU" << std::endl;
}