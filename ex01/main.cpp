/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:46:38 by merlich           #+#    #+#             */
/*   Updated: 2022/11/05 19:30:01 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main( void )
{
	int			arr_i[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	float		arr_f[3] = {3.14f, 4.2f, 21.21f};
	char		arr_ch[5] = {'a', 'b', 'c', 'd', 'e'};
	std::string	str[3] = {"one", "two", "three"};

	print_array(arr_i, 10);
	print_array(arr_f, 3);
	print_array(arr_ch, 5);
	print_array(str, 3);
	std::cout << std::endl;

	iter( arr_i, 10, increase<int> );
	iter( arr_f, 3, increase<float> );
	iter( arr_ch, 5, increase<char> );
	iter( str, 3, str_new );

	print_array(arr_i, 10);
	print_array(arr_f, 3);
	print_array(arr_ch, 5);
	print_array(str, 3);
	std::cout << std::endl;
	
	return 0;
}
