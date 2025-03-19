/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 08:46:55 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/19 12:05:54 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	Array<int>	test(5);
	Array<int>	egal;

	for (size_t i = 0; i < test.size(); i++)
	{
		test[i] = i;
	}
	egal = test;
	for (size_t i = 0; i < test.size(); i++)
	{
		std::cout << test[i];
	}
	std::cout << std::endl;
	for (size_t i = 0; i < test.size(); i++)
	{
		std::cout << egal[i];
	}
	std::cout << std::endl;
	try 
	{
        std::cout << test[6] << std::endl;
    } 
	catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}