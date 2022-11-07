/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:46:54 by merlich           #+#    #+#             */
/*   Updated: 2022/11/05 19:27:46 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template< typename T, typename U, typename W>
void	iter(T & addr, U const & len, W const & func)
{
	U	it;

	for( it = 0; it < len; it++ )
		func(*(addr + it));
}

template< typename R >
void	increase( R & val )
{
	val++;
}

template< typename R >
void	do_nothing( R & val )
{
	val;
}

void	str_new( std::string & str )
{
	str = str.append("_new");
}

template< typename H >
void	print_array( H const & arr, int len )
{
	int	i;

	for(i = 0; i < len; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

#endif
