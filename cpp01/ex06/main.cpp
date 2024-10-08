/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:26:00 by omghazi           #+#    #+#             */
/*   Updated: 2024/10/08 15:41:56 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static int     update_index(int &i, const std::string &level)
{
        if (!level.compare("DEBUG"))
                i = 0;
        else if (!level.compare("INFO"))
                i = 1;
        else if (!level.compare("WARNING"))
                i = 2;
        else if (!level.compare("ERROR"))
                i = 3;
        else
                i = -1;
        return (i);
}

static void    display_message_above(int i, Harl harl, const std::string &level)
{
        std::string currentLevel = level;
        while (i < 4)
        {
                std::cout << "[" << currentLevel << "]" << std::endl;
                harl.complain(currentLevel);
                currentLevel = (i == 0) ? "INFO" : (i == 1) ? "WARNING" : (i == 2) ? "ERROR" : "";
                i++;
        }
}

int main(int argc, char **argv)
{
        Harl    harl;
        if (argc != 2)
        {
                std::cout << "Error\nInvalid argument, enter a level" << std::endl;
                return (EXIT_FAILURE);
        }
        int     i;
        std::string     level;

        level = argv[1];
        i = update_index(i, level);
        switch (i)
        {
                case 0:
                case 1:
                case 2:
                case 3:
                        display_message_above(i, harl, level);
                break;
                default:
                        std::cout << "Error: Invalid level provided" << std::endl;
                return (EXIT_FAILURE);
        }
        return (EXIT_SUCCESS);
}
