/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 07:50:02 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/19 08:45:15 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ostream>
#include <iomanip>

template <typename tp>
void iter(tp *array, int length, void (*function)(tp &))
{
    for (int i = 0; i < length; i++)
    {
        function(array[i]);
    }
}

template <typename tp>
void function(tp &what)
{
	std::cout << what << " ";
}