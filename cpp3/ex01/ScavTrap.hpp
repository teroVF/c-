/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 01:16:13 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/10 12:04:49 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
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

#endif