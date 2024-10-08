/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getter.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:11:09 by omghazi           #+#    #+#             */
/*   Updated: 2024/09/22 13:01:50 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string     Contact::get_firstName(void)
{
        return (firstName);
}

std::string     Contact::get_lastName(void)
{
        return (lastName);
}

std::string     Contact::get_nickName(void)
{
        return (nickName);
}

std::string     Contact::get_phoneNo(void)
{
        return (phoneNo);
}

std::string     Contact::get_darkestSecret(void)
{
        return (darkestSecret);
}
