/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:04:52 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/24 02:23:57 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() :
Animal("Cat")
{
    std::cout << "Cat created" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destroyed" << std::endl;
}

Cat::Cat(const Cat& obj)
{
    this->_type = obj._type;
    std::cout << "Cat created" << std::endl;
}

Cat& Cat::operator= (const Cat& obj)
{
    if (this == &obj)
        return *this;
    this->_type = obj._type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "MIAU" << std::endl;
}