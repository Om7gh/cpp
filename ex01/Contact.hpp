/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:00:24 by omghazi           #+#    #+#             */
/*   Updated: 2024/09/23 12:23:14 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNo;
        std::string darkestSecret;
        public :
                void set_firstName(std::string first);
                void set_lastName(std::string last);
                void set_nickName(std::string nickname);
                void set_phoneNo(std::string phone);
                void set_darkestSecret(std::string secret);
                std::string get_firstName(void);
                std::string get_lastName(void);
                std::string get_nickName(void);
                std::string get_phoneNo(void);
                std::string get_darkestSecret(void);
} ;

#endif
