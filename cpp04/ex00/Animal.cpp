/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 02:20:28 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/23 03:53:05 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal created" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destroyed" << std::endl;
}

Animal::Animal(std::string type)
{
    this->_type = type;
    std::cout << "Animal created" << std::endl;
}

Animal::Animal(const Animal& obj)
{
    this->_type = obj._type;
    std::cout << "Animal created" << std::endl;
}

Animal& Animal::operator= (const Animal& obj)
{
    if (this == &obj)
        return *this;
        this->_type == obj._type;
    return *this;
}