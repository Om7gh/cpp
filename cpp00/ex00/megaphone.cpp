/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:16:04 by omghazi           #+#    #+#             */
/*   Updated: 2024/08/18 13:05:17 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
        for (int i = 1; i <= argc - 1; i++)
            for (int j = 0; argv[i][j]; j++)
                std::cout << (char)toupper(argv[i][j]);
        if (argc == 1)
            std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return (EXIT_SUCCESS);
}
