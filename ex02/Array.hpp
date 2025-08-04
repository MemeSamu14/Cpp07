/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfiorini <sfiorini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 15:04:38 by sfiorini          #+#    #+#             */
/*   Updated: 2025/08/04 12:24:56 by sfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdexcept>

int	abs(int num)
{
	if (num < 0)
		num = num * (-1);
	return (num);
}

template <typename T>
class Array
{
	private:
		T *array;
		unsigned int	s;
	public:
		Array(){this->array = new T[0]; this->s = 0;};
		Array(unsigned int n)
		{
			this->array = new T[n];
			for (int i = 0; i < static_cast<int>(n); i++)
				this->array[i] = 0;
			this->s = n;
		};
		Array(const Array &a): array(a.array){};
		const Array& operator=(const Array &a)
		{
			delete[] this->array;
			array = new T[a.size()];
			for (int i = 0; a.array[i]; i++)
				this->array[i] = a.array[i];
		};
		int	size() const { return (static_cast<int>(this->s)); };
		~Array(){ delete[] array; };
		T&	operator[](int idx)
		{
			if (abs(idx) >= static_cast<int>(this->s) || idx < 0)
				throw std::out_of_range("Out of Range");
			return (this->array[idx]);
		};
};

// template <typename T>
// std::ostream& operator<<(std::ostream& os, const T& a)
// {
// 	os << a << std::endl;
// 	return os;
// }

#endif
