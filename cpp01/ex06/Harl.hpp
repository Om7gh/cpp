/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:24:06 by omghazi           #+#    #+#             */
/*   Updated: 2024/10/08 15:39:32 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
class Harl
{
        private:
                void debug( void );
                void info( void );
                void warning( void );
                void error( void );
        public:
                Harl( void );
                void complain( std::string level );
                ~Harl( void );
};

#endif