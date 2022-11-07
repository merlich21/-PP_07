/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:31:36 by merlich           #+#    #+#             */
/*   Updated: 2022/11/05 23:00:27 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>

template< typename T >
class	Array
{
	public:

		Array<T>( void ) : _arr(NULL), _size(0)
		{
			std::cout << "Array default constructor called" << std::endl;
		}

		Array<T>( unsigned int n ) : _size(n)
		{
			unsigned int i = 0;

			std::cout << "Array custom constructor called" << std::endl;
			this->_arr = new T[n];
			// for(i = 0; i < n; i++)
				// _arr[n] = 0;
		}

		Array<T>( Array<T> const & obj )
		{
			std::cout << "Array copy constructor called" << std::endl;
			*this = obj;
		}

		~Array<T>( void )
		{
			std::cout << "Destructor called" << std::endl;
			if (this->_arr)
				delete [] this->_arr;
		}

		Array<T> &	operator=( Array<T> const & rhs )
		{
			int	i = 0;

			this->_size = rhs._size;
			this->_arr = new T[this->_size];
			for (i = 0; i < this->_size; i++)
				this->_arr[i] = rhs._arr[i];
			return (*this);
		}

		void	setArr( T * arr )
		{
			this->_arr = arr;
		}

		T		*getArr( void ) const
		{
			return (this->_arr);
		}

		int	size( void ) const
		{
			return this->_size;
		}

		T &			operator[]( int i ) const
		{
			if (i < 0 || i >= this->_size)
				throw std::exception();
			else
				return (this->_arr[i]);
		}

	private:

		T 	*_arr;
		int	_size;
};

#endif
