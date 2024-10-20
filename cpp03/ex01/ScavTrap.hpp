/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:26:09 by omghazi           #+#    #+#             */
/*   Updated: 2024/10/19 13:30:15 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{       
        public:
                ScavTrap( void );
                ScavTrap( std::string name );
                void attack(const std::string& target);
                ~ScavTrap( void );
                void attac_guard(const std::string& target);
                void guardGate( void );
};

#endif