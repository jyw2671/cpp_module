/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:09:29 by yjung             #+#    #+#             */
/*   Updated: 2022/01/27 16:42:52 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat *input_info() {
	std::string name;
	int grade;

	try {
		std::cout << "name : ";
		std::cin >> name;
		std::cout << "grade : ";
		std::cin >> grade;
		return (new Bureaucrat(name, grade));
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return (input_info());
	}
}

int main() {
	{
		Bureaucrat *yjung = input_info();

		std::cout << *yjung << std::endl;
		try {
			std::cout << "-----   incrementGrade(3)   -------" << std::endl;
			yjung->incrementGrade(3);
			std::cout << *yjung << std::endl;
			std::cout << "------   decrementGrade(3)   -------" << std::endl;
			yjung->decrementGrade(3);
			std::cout << *yjung << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		delete yjung;
	}
	// system("leaks ex00");
	return (0);
}
