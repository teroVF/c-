/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:16:17 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/26 01:56:02 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <string>
# include <iostream>

# define DEBUG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
# define INFO "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
# define WARNING "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."
# define ERROR "This is unacceptable, I want to speak to the manager now."


class Harl
{
typedef std::string string;
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    void complain( string level );
    Harl();
    ~Harl();
};
