/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:27:50 by merlich           #+#    #+#             */
/*   Updated: 2022/11/05 17:44:00 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template< typename T >
void	swap( T & x, T & y )
{
	T	tmp = x;
	
	x = y;
	y = tmp;
}

template< typename T >
T const &	min( T const & a, T const & b )
{
	return (a < b ? a : b);
}

template< typename T >
T const &	max( T const & c, T const & d )
{
	return (c > d ? c : d);
}

#endif
