/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 06:54:32 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/19 07:44:55 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ostream>
#include <iomanip>

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