/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 14:10:44 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/03 13:13:00 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ass.hpp"

int	main( void )
{
	{
		int	a = 5;
		int	b = 3;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		swap(a, b);
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		int	minor = min(a, b);
		int	maximus = max(a, b);
		std::cout << "min: " << minor << std::endl;
		std::cout << "max: " << maximus << std::endl;
	}
	{
		int a = 2;
		int b = 3;
		swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	
	return (0);
}
