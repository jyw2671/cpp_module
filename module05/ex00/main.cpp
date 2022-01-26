/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:09:29 by yjung             #+#    #+#             */
/*   Updated: 2022/01/26 15:32:15 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

static Bureaucrat *input_info()
{
	std::string name;
	int grade;

	try {
		std::cout << "name : ";
		std::cin >> name;
		std::cout << "grade : ";
		std::cin >> grade;
		return new Bureaucrat(name, grade);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return input_info();
	}
}

int main()
{
	{
		Bureaucrat *b = input_info();

		std::cout << *b << std::endl;
		try {
			b->incrementGrade(3);
			std::cout << *b << std::endl;
			b->incrementGrade();
			std::cout << *b << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		delete b;
	}
	// system("leaks ex00");
	return (0);
}
