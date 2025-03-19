/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 07:50:02 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/19 08:18:36 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Implement a function template iter that takes 3 parameters and returns nothing.
// • The first parameter is the address of an array.
// • The second one is the length of the array.
// • The third one is a function that will be called on every element of the array.

// Your iter function template must work with any type of array. The third parameter
// can be an instantiated function template.

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