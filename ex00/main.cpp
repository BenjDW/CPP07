/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 07:41:22 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/19 07:44:33 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
    int x = 42, y = 24;
    double d1 = 5.5, d2 = 2.2;

    std::cout << "Avant swap: x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "Après swap: x = " << x << ", y = " << y << std::endl;

    std::cout << "min(3, 7) = " << min(3, 7) << std::endl;
    std::cout << "max(3, 7) = " << max(3, 7) << std::endl;

    std::cout << "min(d1, d2) = " << min(d1, d2) << std::endl;
    std::cout << "max(d1, d2) = " << max(d1, d2) << std::endl;

    return 0;
}