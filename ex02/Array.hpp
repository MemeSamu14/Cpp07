/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 15:04:38 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/03 17:09:12 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
	private:
		T *array;
		unsigned int	s;
	public:
		Array(){this->array = new T[0]; this->s = 0;};
		Array(unsigned int n){ this->array = new T[n]; this->s = n;};
		Array(const Array &a): array(a.array){};
		const Array& operator=(const Array &a)
		{
			delete[] this->array;
			array = new T[a.size()];
			for (int i = 0; a.array[i]; i++)
				this->array[i] = a.array[i];
		};
		unsigned int size() const { return (this->s); };
		~Array(){ delete[] array; };
		T&	operator[](int idx)
		{
			try
			{
				if (idx >= static_cast<int>(this->s))
					throw std::out_of_range("Out of Range");
			}
			catch (const std::out_of_range& e)
			{
				std::cout << e.what() << std::endl;
			}
			return (this->array[idx]);
		};
};


#endif
