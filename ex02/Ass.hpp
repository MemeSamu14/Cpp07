/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ass.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 14:03:57 by sfiorini          #+#    #+#             */
/*   Updated: 2025/07/06 14:53:46 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_HPP
# define Array_HPP

#include <iostream>
#include <string>

template <typename T>
void	swap(T& a, T& b)
{
	T c;
	c = a;
	a = b;
	b = c;
}

template <typename T>
const T&	min(T& a, T& b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
const	T&	max(T& a, T& b)
{
	if (a > b)
		return (a);
	return (b);
}


template <typename T>
void	iter(T* addres, const int len, void (*func)(T&))
{
	for(int	i = 0; i < len; i++)
	{
		func(addres[i]);
	}
}

template <typename T>
class Array
{
	private:
		T	array;
	public:
		Array( void )
		{
			array	
			return 
		};
		
	
};



#endif