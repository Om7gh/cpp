/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:29:22 by omghazi           #+#    #+#             */
/*   Updated: 2024/12/05 20:23:39 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
        try
        {
                Data data = {1, "test"};
                Data *ptr = &data;
                uintptr_t       raw = Serializer::serialize(ptr);
                Data *deserializPtr  = Serializer::deserialize(raw);
                
                if (ptr == deserializPtr)
                        std::cout << "converted Successfully !" << std::endl;
                else
                        throw "Data doesnt converted successfully";     
        }
        catch (const char *s)
        {
                std::cout << "Error " << s << std::endl;
        }
}
