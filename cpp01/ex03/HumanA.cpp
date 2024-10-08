/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:45:49 by omghazi           #+#    #+#             */
/*   Updated: 2024/10/07 20:18:39 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string humanName, Weapon &weaponName) : name(humanName), weapon(weaponName)
{
}

HumanA::~HumanA()
{        
}

void    HumanA::attack( void ) const
{
        std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
