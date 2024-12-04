/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 12:56:31 by omghazi           #+#    #+#             */
/*   Updated: 2024/12/03 15:05:36 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
        Bureaucrat bureaucrat("omar");
        try
        {
                bureaucrat.increment_grade();
                bureaucrat.decrement_grade();
                bureaucrat.decrement_grade();
                bureaucrat.decrement_grade();
                std::cout << bureaucrat << std::endl;
        }
        catch (std::exception &e)
        {
                std::cout << e.what() << std::endl;
        }
        return (EXIT_SUCCESS);
}
