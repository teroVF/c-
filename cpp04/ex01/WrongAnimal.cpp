/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 02:20:28 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/24 02:33:13 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->_type = type;
    std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    this->_type = obj._type;
    std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& obj)
{
    if (this == &obj)
        return *this;
    this->_type = obj._type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "ENTAO?" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->_type;
}