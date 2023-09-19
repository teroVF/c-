/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 01:16:13 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/19 02:50:09 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const& scavTrap);
        ~ScavTrap(void);

        ScavTrap&	operator=(ScavTrap const& scavTrap);

        void		attack(std::string const& target);
        void		guardGate(void);
};
