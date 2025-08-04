/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 14:10:44 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/04 12:25:03 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"



int	main( void )
{
	Array<int> a(10);

	try
	{
		a[10] = 5; // too high index
	}
	catch (const std::out_of_range& e){ std::cout << e.what() << std::endl; }
	try
	{
		a[-2] = 5; // too low index
	}
	catch (const std::out_of_range& e){ std::cout << e.what() << std::endl; }
	try
	{
		a[0] = 50; // correct index
		std::cout << a[0] << std::endl;
	}
	catch (const std::out_of_range& e){ std::cout << e.what() << std::endl; }
	try
	{
		for (int i = 0; i < a.size(); i++)
			a[i] = i;
		for (int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;
	}
	catch (const std::out_of_range& e){ std::cout << e.what() << std::endl; }	
	
	Array<int> *b = new Array<int>(5);
	// std::cout << b[0] << std::endl;
	delete b;

	return (0);
}
