/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 12:56:31 by omghazi           #+#    #+#             */
/*   Updated: 2024/12/04 15:47:01 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("Omar", 20);
        std::cout << bureaucrat << std::endl;

        bureaucrat.increment_grade();
        std::cout << "After increment: " << bureaucrat << std::endl;

        bureaucrat.decrement_grade();
        bureaucrat.decrement_grade();
        bureaucrat.decrement_grade();
        std::cout << "After three decrements: " << bureaucrat << std::endl;

        Form form("form");
        std::cout << form << std::endl;

        bureaucrat.signForm(form);
        std::cout << "After signing: " << form << std::endl;

        Bureaucrat lowRank("Ali", 75);
        std::cout << lowRank << std::endl;

        lowRank.signForm(form);
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}
