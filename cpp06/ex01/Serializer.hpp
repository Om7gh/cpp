/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:29:33 by omghazi           #+#    #+#             */
/*   Updated: 2024/12/05 19:51:13 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Data.hpp"
#include <string>

class Serializer
{
        public:
                Serializer( void );
                ~Serializer( void );
                static uintptr_t serialize(Data* ptr);
                static Data* deserialize(uintptr_t raw);
};
