/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 02:48:14 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/25 16:51:07 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_phone_number(Contact *contact)
{
    str number;
    std::cout << "Number: ";
    std::getline(std::cin, number);
    if (number.length() == 0)
    {
        std::cout << "empty argument" << std::endl;
        set_phone_number(contact);
    }
    else
        this->phone_number = number;
}

void Contact::set_first_name()
{
    str first_name;
    std::cout << "First name: ";
    std::getline(std::cin, first_name);
    if (first_name.length() == 0)
    {
        std::cout << "empty argument" << std::endl;
        set_first_name();
    }
    else
        this->first_name = first_name;
}

void Contact::set_last_name(Contact *contact)
{
    str last_name;
    std::cout << "Last name: ";
    std::getline(std::cin, last_name);
    if (last_name.length() == 0)
    {
        std::cout << "empty argument" << std::endl;
        set_last_name(contact);
    }
    else
        this->last_name = last_name;
}

void Contact::set_nickname(Contact *contact)
{
    str nickname;
    std::cout << "Nickname: ";
    std::getline(std::cin, nickname);
    if (nickname.length() == 0)
    {
        std::cout << "empty argument" << std::endl;
        set_nickname(contact);
    }
    else
        this->nickname = nickname;
}

void Contact::set_darkest_secret(Contact *contact)
{
    str secret;
    std::cout << "Tell me your darkest secret: ";
    std::getline(std::cin, secret);
    if (secret.length() == 0)
    {
        std::cout << "empty argument" << std::endl;
        set_darkest_secret(contact);
    }
    else
        this->darkest_secret = secret;
}

Contact::str Contact::get_first_name() 
{
    return (this->first_name);
}

Contact::str Contact::get_last_name() 
{
    return (this->last_name);
}

Contact::str Contact::get_nickname() 
{
    return (this->nickname);
}

Contact::str Contact::get_phone_number() 
{
    return (this->phone_number);
}

Contact::str Contact::get_darkest_secret() 
{
    return (this->darkest_secret);
}
