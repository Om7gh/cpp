/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:32:07 by omghazi           #+#    #+#             */
/*   Updated: 2024/12/05 17:58:28 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <string>

class ScalarConverter
{
        public:
                ScalarConverter( void );
                ~ScalarConverter( void );
                ScalarConverter( const ScalarConverter &obj );
                ScalarConverter& operator=(ScalarConverter &obj);
                static void    convert(std::string input);  
};
