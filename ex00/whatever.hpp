/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 06:54:32 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/19 07:40:45 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// template <typename "nom/type">

// Implement the following function templates:

// • swap: Swaps the values of two given arguments. Does not return anything.

// • min: Compares the two values passed in its arguments and returns the smallest
// one. If the two of them are equal, then it returns the second one.

// • max: Compares the two values passed in its arguments and returns the greatest one.
// If the two of them are equal, then it returns the second one.

// These functions can be called with any type of argument. The only requirement is
// that the two arguments must have the same type and must support all the comparison
// operators.

template <typename type>
void swap(type &V1, type &V2)
{
	type temp;

	temp = V1;
	V1 = V2;
	V2 = temp;
}

template <typename type>
type	min(type V1, type V2)
{
	if (V1 < V2)
		return (V1);
	else
		return (V2);
}

template <typename type>
type	max(type V1, type V2)
{
	if (V1 > V2)
		return (V1);
	else
		return (V2);
}