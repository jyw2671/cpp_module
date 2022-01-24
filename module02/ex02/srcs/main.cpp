/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:07:31 by yjung             #+#    #+#             */
/*   Updated: 2022/01/24 14:35:06 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(2);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	// std::cout << "----------------------" << std::endl;
	// std::cout << --a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a-- << std::endl;
	// std::cout << a << std::endl;
	// std::cout << Fixed::min(a, b) << std::endl;
	// std::cout << "------comparison------" << std::endl;
	// std::cout << (a < b) << std::endl;
	// std::cout << (a > b) << std::endl;
	// std::cout << (a <= b) << std::endl;
	// std::cout << (a >= b) << std::endl;
	// std::cout << (a == b) << std::endl;
	// std::cout << (a != b) << std::endl;
	// std::cout << "------arithmetic------" << std::endl;
	// std::cout << c + b << std::endl;
	// std::cout << c - b << std::endl;
	// std::cout << c * b << std::endl;
	// std::cout << c / b << std::endl;
	return (0);
}
