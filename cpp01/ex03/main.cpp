/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:44:36 by omghazi           #+#    #+#             */
/*   Updated: 2024/10/07 20:36:15 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
        {
                Weapon club = Weapon("crude spiked club");
                HumanA bob("Bob", club);
                bob.attack();
                club.setType("some other type of club");
                bob.attack();
        }
        {
                Weapon club = Weapon("crude spiked club");
                HumanB jim("Jim");
                jim.setWeapon(club);
                jim.attack();
                club.setType("some other type of club");
                jim.attack();
        }
        return (EXIT_SUCCESS);
}
