/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 02:51:03 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/25 17:04:51 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
using std::string;
using std::cout;

class Contact
{
    public:
        typedef std::string str;
        void set_first_name();
        void set_last_name(Contact *contact);
        void set_nickname(Contact *contact);
        void set_phone_number(Contact *contact);
        void set_darkest_secret(Contact *contact);
        str get_first_name();
        str get_last_name();
        str get_nickname();
        str get_phone_number();
        str get_darkest_secret();
        
    private:
        str first_name;
        str last_name;
        str nickname;
        str phone_number;
        str darkest_secret;
};
