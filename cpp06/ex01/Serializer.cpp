/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:50:34 by omghazi           #+#    #+#             */
/*   Updated: 2024/12/05 20:19:02 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer( void )
{}

Serializer::~Serializer( void )
{}

uintptr_t Serializer::serialize(Data* ptr)
{
        return (reinterpret_cast<uintptr_t>(ptr));
}

Data*Serializer:: deserialize(uintptr_t raw)
{
        return (reinterpret_cast<Data*>(raw));
}
