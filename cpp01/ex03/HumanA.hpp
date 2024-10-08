/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:45:59 by omghazi           #+#    #+#             */
/*   Updated: 2024/10/07 20:28:39 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
#define HUMAN_A_H

#include "Weapon.hpp"

class HumanA
{
        private:
                std::string name;
                Weapon &weapon;
        public:
                HumanA( std::string humaneName, Weapon &weaponName );
                 void attack( void ) const;
                ~HumanA();
};

#endif
