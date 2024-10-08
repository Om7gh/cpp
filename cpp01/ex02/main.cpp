/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:12:33 by omghazi           #+#    #+#             */
/*   Updated: 2024/10/07 18:33:30 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main()
{
        std::string      var;
        var = "this is a string";
        std::string     *varPtr = &var;
        std::string     &varRef = var;

        std::cout << "address :" << std::endl;
        std::cout << &var << std::endl;
        std::cout << varPtr << std::endl;
        std::cout << &varRef << std::endl;
        std::cout << "value :" << std::endl;
        std::cout << var << std::endl;
        std::cout << *varPtr << std::endl;
        std::cout << varRef << std::endl;
        return (EXIT_SUCCESS);
}
