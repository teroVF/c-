/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 02:50:55 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/14 00:01:47 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

std::string Phonebook::limited_str(std::string str)
{
    if (str.length() > 10)
    {
        str = str.substr(0, 9);
        str.append(".");
    }
    return (str);
}

bool Phonebook::is_a_number(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
        if (!isdigit(str[i]))
            return (false);
    return (true);
}

void Phonebook::print_contact(int index)
{
    std::cout << "First name: " << contact[index].get_first_name() << std::endl;
    std::cout << "Last name: " << contact[index].get_last_name() << std::endl;
    std::cout << "Nickname: " << contact[index].get_nickname() << std::endl;
    std::cout << "Phone number: " << contact[index].get_phone_number() << std::endl;
    std::cout << "Darkest secret: " << contact[index].get_darkest_secret() << std::endl;
}
void    Phonebook::add_contact()
{
    Contact contact_temp;
    
    contact_temp.set_first_name(&contact_temp);
    contact_temp.set_last_name(&contact_temp);
    contact_temp.set_nickname(&contact_temp);
    contact_temp.set_phone_number(&contact_temp);
    contact_temp.set_darkest_secret(&contact_temp);
    if (index == 8)
    {
        Contact new_contact[8];
        for (int i = 0; i < 7; i++)
            new_contact[i + 1] = contact[i];
        new_contact[0] = contact_temp;
        for (int i = 0; i < 8; i++)
            contact[i] = new_contact[i];
    }
    else
    {
        contact[index] = contact_temp;
        index++;
    }
}

void Phonebook::search_contact()
{
    if (index == 0)
    {
        std::cout << "No contacts to show" << std::endl;
        return ;
    } 
    std::cout << "     index|first name| last name|  nickname|" << std::endl;
    for (int i = 0; i < index; i++)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << limited_str(contact[i].get_first_name()) << "|";
        std::cout << std::setw(10) << limited_str(contact[i].get_last_name()) << "|";
        std::cout << std::setw(10) << limited_str(contact[i].get_nickname()) << "|" << std::endl;
    }
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "Enter an index: ";
    std::string index_str;
    std::getline(std::cin, index_str); 
    if (index_str.length() == 0)
    {
        std::cout << "empty argument" << std::endl;
        search_contact();
    }
    else if (index_str == "EXIT")
        exit(0);
    else if (!is_a_number(index_str))
    {
        std::cout << "Invalid index" << std::endl;
        search_contact();
    }
    else
    {
        int index_int = std::atoi(index_str.c_str());
        if (index_int < 0 || index_int >= index)
        {
            std::cout << "Invalid index" << std::endl;
            search_contact();
        }
        else
            print_contact(index_int);
    }
    
}
