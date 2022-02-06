/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:18:12 by yjung             #+#    #+#             */
/*   Updated: 2022/02/06 13:19:18 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

// int main()
// {
	// std::cout << "-----------------------------------" << std::endl;
//
	// std::cout << "Test type INT" << std::endl;
	// int a[] = {0, 1, 2, 3, 4};
	// iter(a, 5, print);
	// std::cout << std::endl;
	// iter(a, 5, plusOne);
	// iter(a, 5, print);
	// std::cout << std::endl;
//
	// std::cout << "-----------------------------------" << std::endl;
//
	// std::cout << "Test type FLOAT" << std::endl;
	// float b[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	// iter(b, 5, print);
	// std::cout << std::endl;
	// iter(b, 5, plusOne);
	// iter(b, 5, print);
	// std::cout << std::endl;
//
	// std::cout << "-----------------------------------" << std::endl;
//
	// std::cout << "Test type CHAR" << std::endl;
	// char c[] = {'a', 'b', 'c', 'd', 'e'};
	// iter(c, 5, print);
	// std::cout << std::endl;
	// iter(c, 5, plusOne);
	// iter(c, 5, print);
	// std::cout << std::endl;
//
	// std::cout << "-----------------------------------" << std::endl;
	// return (0);
// }

int main()
{
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter( tab, 5, print);
	iter( tab2, 5, print);

	return 0;
}
