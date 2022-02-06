/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:08:41 by yjung             #+#    #+#             */
/*   Updated: 2022/02/06 14:08:42 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 10

int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand() % 10;
		numbers[i] = value;
		mirror[i] = value;
	}
	//PRINT
	std::cout << "======================" << std::endl;
	std::cout << "numbers print" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
		std::cout << numbers[i] << ' ';
	std::cout << std::endl;
	std::cout << "======================" << std::endl;
	std::cout << "mirror print" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
		std::cout << mirror[i] << ' ';
	std::cout << std::endl;
	//SCOPE
	{
		Array<int> tmp1, tmp2;
		tmp1 = numbers;
		tmp2 = numbers;
		std::cout << "======================" << std::endl;
		std::cout << "tmp print" << std::endl;
		for (int i = 0; i < MAX_VAL; i++)
			std::cout << tmp1[i] << ' ';
		std::cout << std::endl;
		Array<int> test(tmp1);
		std::cout << "======================" << std::endl;
		std::cout << "test print" << std::endl;
		for (int i = 0; i < MAX_VAL; i++)
			std::cout << test[i] << ' ';
		std::cout << std::endl;
	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try {
		numbers[-1] = 0;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	for (int i = 0; i < MAX_VAL; i++) {
		numbers[i] = rand();
	}
	delete [] mirror;
	return 0;
}
