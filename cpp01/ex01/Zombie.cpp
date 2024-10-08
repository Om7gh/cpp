/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:26:29 by omghazi           #+#    #+#             */
/*   Updated: 2024/10/07 17:58:39 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string zombieName) : name(zombieName)
{
        
}

Zombie::Zombie( void )
{

}

Zombie::~Zombie( void )
{
        std::cout << name << " has been destroyed." << std::endl;
}

void    Zombie::announce()
{
        std::cout << Zombie::name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
