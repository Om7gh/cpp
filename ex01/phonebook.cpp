/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:16:54 by omghazi           #+#    #+#             */
/*   Updated: 2024/09/25 10:46:50 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int     PhoneBook::i = 1;

std::string    get_input(std::string message)
{
        std::string input;

        std::cout << message << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof())
                exit (0);
        return (input);
}

void    PhoneBook::add_contact()
{
        std::string input;

        if (PhoneBook::i == 9)
        {
                std::cout << "Number of contact available is exceed" << std::endl;
                PhoneBook::i = 0;
        }
        input = get_input("type your first name");
        PhoneBook::contact[PhoneBook::i].set_firstName(input);
        input = get_input("type your last name");
        PhoneBook::contact[PhoneBook::i].set_lastName(input);
        input = get_input("type your nickname");
        PhoneBook::contact[PhoneBook::i].set_nickName(input);
        input = get_input("type your Phone number");
        PhoneBook::contact[PhoneBook::i].set_phoneNo(input);
        input = get_input("type your darkest secret");
        PhoneBook::contact[PhoneBook::i].set_darkestSecret(input);
        PhoneBook::i++;
}

void    PhoneBook::search_contact()
{
        int     index;

        std::cout << "choose index from Contact table" << std::endl;
        std::cin >> index;
        if (std::cin.eof())
                exit (0);
        if (index < 1 || index > 8)
        {
                std::cout << "index is not correct" << std::endl;
                return ;
        }
        std::cout << std::setfill('-') << "index"  << std::setw(10) << "|"  ;
        std::cout << std::setfill('-') << "firstName" << std::setw(10) << "|" << std::setw(10);
        std::cout << std::setfill('-') << "lastName" << std::setw(10) << "|" << std::setw(10);
        std::cout << std::setfill('-') << "nickName" << std::endl;

        std::cout << std::setfill('-') << index << std::setw(13) << "|" << std::setw(10);
        std::cout << std::setfill('-') << PhoneBook::contact[index - 1].get_firstName() << std::setw(10) << "|" << std::setw(10);
        std::cout << std::setfill('-') << PhoneBook::contact[index - 1].get_lastName() << std::setw(10) << "|" << std::setw(10);
        std::cout << std::setfill('-') << PhoneBook::contact[index - 1].get_nickName() << std::setw(10) << std::endl;
        return ;
}

int main()
{
        std::string     input;
        PhoneBook       phone;

        std::cout << "" << std::endl;
        std::cout << "     ADD : for adding new contact " << std::endl;
        std::cout << "     SEARCH : for searching for contact " << std::endl;
        std::cout << "     EXIT : for quit the program " << std::endl;
        while (input.compare("EXIT"))
        {
                std::getline(std::cin ,input);
                if (std::cin.eof())
                        break ;
                if (!input.compare("ADD"))
                        phone.add_contact();
                if (!input.compare("SEARCH"))
                        phone.search_contact();
        }
        return (EXIT_SUCCESS);
}
