/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:22:49 by omghazi           #+#    #+#             */
/*   Updated: 2024/10/07 17:56:17 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
         Zombie* horde = new Zombie[N];  // Allocate an array of zombies

    for (int i = 0; i < N; i++) {
        // Use the constructor to initialize each zombie with a unique name
        new (&horde[i]) Zombie(name + std::to_string(i + 1));  // Placement new
    }
    return horde;
}
