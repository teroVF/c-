/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:04:35 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/14 23:51:54 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <string>
#include "Contact.hpp"

class Phonebook
{
    private:
        Contact contact[8];
        int index;
    public:
        void init_index();
        void add_contact();
        void search_contact();
        void print_contact(int index);
        bool is_a_number(std::string str);
        std::string limited_str(std::string str);
};

