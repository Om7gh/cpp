/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:44:19 by omghazi           #+#    #+#             */
/*   Updated: 2024/10/07 20:31:24 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string initialWeapon) : weapon(initialWeapon)
{
}

Weapon::~Weapon( void )
{
}

void    Weapon::setType( std::string weapon )
{
        this->weapon = weapon;
}

const std::string&    Weapon::getType( void ) const
{
        return (weapon);
}
