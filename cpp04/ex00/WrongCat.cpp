/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:04:52 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/24 02:23:57 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() :
WrongAnimal("WrongCat")
{
    std::cout << "WrongCat created" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destroyed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj)
{
    this->_type = obj._type;
    std::cout << "WrongCat created" << std::endl;
}

WrongCat& WrongCat::operator= (const WrongCat& obj)
{
    if (this == &obj)
        return *this;
    this->_type = obj._type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "MIAU" << std::endl;
}