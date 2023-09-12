/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 01:16:13 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/12 03:16:17 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const& scavTrap);
        ~FragTrap(void);
        FragTrap&	operator=(FragTrap const& scavTrap);
        void       highFivesGuys(void);
};
