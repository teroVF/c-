/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 02:20:36 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/24 02:40:02 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;
public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal& obj);
    WrongAnimal& operator=(const WrongAnimal& obj);
    WrongAnimal(std::string type);

    std::string getType() const;
        
    void makeSound() const;
};

