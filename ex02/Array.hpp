/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 08:47:00 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/19 12:06:46 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <ostream>
#include <stdexcept>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T> &cpy);
		~Array();
		Array<T>& operator=(const Array<T>& cpy);
		T& operator[](unsigned int index);
		unsigned int	size();
		T	*array_tab;
	private:
		unsigned int	_size;
		
};

template <typename T>
unsigned int	Array<T>::size()
{
	return (this->_size);
}

template <typename T>
Array<T>::Array() : array_tab(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	array_tab = new T[n];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& cpy)
{
	if (this != &cpy)
    {
        delete[] array_tab;
        _size = cpy._size;
        array_tab = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            array_tab[i] = cpy.array_tab[i];
    }
	return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw std::out_of_range("Index out of bounds");
    return array_tab[index];
}

template <typename T>
Array<T>::Array(const Array<T>& cpy) : _size(cpy._size)
{
    array_tab = new T[_size];
    for (unsigned int i = 0; i < _size; i++)
        array_tab[i] = cpy.array_tab[i];
}

template <typename T>
Array<T>::~Array()
{
	delete[] array_tab;
}
