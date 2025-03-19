/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 07:49:53 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/19 08:39:56 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int array[] = {1, 2, 3, 4, 5};
	// std::string array[] = {"a", "b", "c", "d", "e"};
    int size = 5;

    std::cout << "iter : ";
    iter(array, size, function);
    std::cout << std::endl;

	return (0);
}