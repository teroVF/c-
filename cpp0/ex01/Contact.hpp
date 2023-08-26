/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 02:51:03 by anvieira          #+#    #+#             */
/*   Updated: 2023/08/26 02:51:05 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        void set_first_name(Contact *contact);
        void set_last_name(Contact *contact);
        void set_nickname(Contact *contact);
        void set_phone_number(Contact *contact);
        void set_darkest_secret(Contact *contact);
        std::string get_first_name() {return (this->first_name);}
        std::string get_last_name() {return (this->last_name);}
        std::string get_nickname() {return (this->nickname);}
        std::string get_phone_number() {return (this->phone_number);}
        std::string get_darkest_secret() {return (this->darkest_secret);}
};

#endif