/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:31:28 by merlich           #+#    #+#             */
/*   Updated: 2022/11/05 23:22:47 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void )
{
	int	i = 0;
	
	Array<int>			arr0;
	Array<int>			arr1;
	Array<int>			arr2(10);
	Array<int>			arr3;

	/* custom constructor test */
	std::cout << "custom constructor test" << std::endl;
	std::cout << "array2 before: " << arr2.size() << std::endl;
	for(i = 0; i < 10; i++)
		std::cout << arr2[i] << std::endl;

	/* operator[] test */
	for(i = 0; i < 10; i++)
		arr2[i] = i;

	std::cout << "operator[] test" << std::endl;
	std::cout << "array2 after: " << arr2.size() << std::endl;
	for(i = 0; i < 10; i++)
		std::cout << arr2[i] << std::endl;

	/* operator= test */
	arr3 = arr2;
	std::cout << "operator= test" << std::endl;
	std::cout << "array3: " << arr3.size() << std::endl;
	for(i = 0; i < 10; i++)
		std::cout << arr3[i] << std::endl;

	/* deep copy of operator= test */
	for(i = 0; i < 10; i++)
		arr2[i] = arr2[i] * 10;

	std::cout << "deep copy of operator= test" << std::endl;
	std::cout << "array2 after: " << arr2.size() << std::endl;
	for(i = 0; i < 10; i++)
		std::cout << arr2[i] << std::endl;

	std::cout << "array3: " << arr3.size() << std::endl;
	for(i = 0; i < 10; i++)
		std::cout << arr3[i] << std::endl;

	/* copy constructor test */
	Array<int>			arr4(arr3);

	std::cout << "copy constructor test" << std::endl;
	std::cout << "array4: " << arr4.size() << std::endl;
	for(i = 0; i < 10; i++)
		std::cout << arr4[i] << std::endl;

	/* throwing exception test */
	std::cout << "throwing exception test" << std::endl;
	try
	{
		std::cout << arr4[i] << std::endl;
	}
	catch ( std::exception const & e )
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}






// int	main( void )
// {
// 	int	i = 0;
	
// 	Array<std::string>			arr0;
// 	Array<std::string>			arr1;
// 	Array<std::string>			arr2(10);
// 	Array<std::string>			arr3;

// 	/* custom constructor test */
// 	std::cout << "custom constructor test" << std::endl;
// 	std::cout << "array2 before: " << arr2.size() << std::endl;
// 	for(i = 0; i < 10; i++)
// 		std::cout << arr2[i] << std::endl;

// 	/* operator[] test */
// 	for(i = 0; i < 10; i++)
// 		arr2[i] = "one";

// 	std::cout << "operator[] test" << std::endl;
// 	std::cout << "array2 after: " << arr2.size() << std::endl;
// 	for(i = 0; i < 10; i++)
// 		std::cout << arr2[i] << std::endl;

// 	/* operator= test */
// 	arr3 = arr2;
// 	std::cout << "operator= test" << std::endl;
// 	std::cout << "array3: " << arr3.size() << std::endl;
// 	for(i = 0; i < 10; i++)
// 		std::cout << arr3[i] << std::endl;

// 	/* deep copy of operator= test */
// 	for(i = 0; i < 10; i++)
// 		arr2[i] = "!";

// 	std::cout << "deep copy of operator= test" << std::endl;
// 	std::cout << "array2 after: " << arr2.size() << std::endl;
// 	for(i = 0; i < 10; i++)
// 		std::cout << arr2[i] << std::endl;

// 	std::cout << "array3: " << arr3.size() << std::endl;
// 	for(i = 0; i < 10; i++)
// 		std::cout << arr3[i] << std::endl;

// 	/* copy constructor test */
// 	Array<std::string>	arr4(arr3);

// 	std::cout << "copy constructor test" << std::endl;
// 	std::cout << "array4: " << arr4.size() << std::endl;
// 	for(i = 0; i < 10; i++)
// 		std::cout << arr4[i] << std::endl;

// 	/* throwing exception test */
// 	std::cout << "throwing exception test" << std::endl;
// 	try
// 	{
// 		std::cout << arr4[i] << std::endl;
// 	}
// 	catch ( std::exception const & e )
// 	{
// 		std::cout << e.what() << std::endl;
// 	}

// 	return 0;
// }







// #define MAX_VAL 750

// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
