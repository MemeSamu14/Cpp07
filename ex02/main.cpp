/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 14:10:44 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/04 13:46:35 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <vector>

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
	std::cout << "costruttore e operatore di copia" << std::endl;
	Array<int> ciao(3);
	ciao[0] = 3;
	ciao[1] = 4;
	ciao[2] = 5;
	Array<int> ciao1(ciao);
	for (int i = 0; i < 3; i++)
		std::cout << ciao1[i] << std::endl;
	// std::vector<int> *cars = new std::vector<int>;

	std::cout << "trying heap allocation" << std::endl;
	Array<int> *arr = new Array<int>(5);
	(*arr)[0] = 1;
	std::cout << (*arr)[0] << std::endl;
	delete arr;
	return (0);
}
