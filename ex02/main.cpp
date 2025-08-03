/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 14:10:44 by sfiorini          #+#    #+#             */
/*   Updated: 2025/07/06 14:42:11 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ass.hpp"


void	stringFunc(std::string &a)
{
	std::cout << "strFunc: " << a << std::endl;
}

void	intFunc(int &a)
{
	a++;
	std::cout << "increment..."<< std::endl;
}

int	main( void )
{
	int	integers[5] = {1, 2, 3, 4, 5};
	std::string strings[3] = {"Amy", "Fara", "Faller"};

	for (int i = 0; i < 5; i++)
		std::cout << "int: " << integers[i] << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << "sring: " << strings[i] << std::endl;
	
	iter(integers, 5, &intFunc);

	for (int i = 0; i < 5; i++)
		std::cout << "int: " << integers[i] << std::endl;
	
	iter(strings, 3, &stringFunc);
	return (0);
}
