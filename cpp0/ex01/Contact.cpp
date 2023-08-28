/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 02:48:14 by anvieira          #+#    #+#             */
/*   Updated: 2023/08/26 02:51:16 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_phone_number(Contact *contact)
{
    std::string number;
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

void Contact::set_first_name(Contact *contact)
{
    std::string first_name;
    std::cout << "First name: ";
    std::getline(std::cin, first_name);
    if (first_name.length() == 0)
    {
        std::cout << "empty argument" << std::endl;
        set_first_name(contact);
    }
    else
        this->first_name = first_name;
}

void Contact::set_last_name(Contact *contact)
{
    std::string last_name;
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
    std::string nickname;
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
    std::string secret;
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