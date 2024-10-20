/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:32:32 by omghazi           #+#    #+#             */
/*   Updated: 2024/10/19 13:36:38 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{}

ScavTrap::ScavTrap( const std::string name )
{
        this->energy_point = 50;
        this->attack_damage = 20;
        this->hit_point = 100;
        this->name = name;
        std::cout << "Constructor is called" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
        std::cout << "Destructor is called" << std::endl;
}
