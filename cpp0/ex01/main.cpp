/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 02:26:55 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/25 17:06:28 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
    Phonebook phonebook;
    std::string command = "";
    phonebook.init_index();
    while(command != "EXIT")
    {
        cout << "Enter a command: ";
        std::getline(std::cin, command);
        if (command == "ADD")
            phonebook.add_contact();
        else if (command == "SEARCH")
            phonebook.search_contact();
        else if (command != "EXIT")
        {
            std::cout << "Invalid command: " << command << std::endl;
            std::cout << "Valid commands: ADD, SEARCH, EXIT" << std::endl;
        }
    }
    return (0);
}
