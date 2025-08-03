/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ass.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 14:03:57 by sfiorini          #+#    #+#             */
/*   Updated: 2025/07/06 14:19:06 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASS_HPP
# define ASS_HPP

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


#endif