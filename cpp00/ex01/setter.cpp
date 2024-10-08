/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setter.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:08:30 by omghazi           #+#    #+#             */
/*   Updated: 2024/09/22 12:16:37 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::set_firstName(std::string first)
{
        firstName = first;
}

void    Contact::set_lastName(std::string last)
{
        lastName = last;
}

void    Contact::set_nickName(std::string nickname)
{
        nickName = nickname;
}

void    Contact::set_phoneNo(std::string phone)
{
        phoneNo = phone;
}

void    Contact::set_darkestSecret(std::string secret)
{
        darkestSecret = secret;
}
