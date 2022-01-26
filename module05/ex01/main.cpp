/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:26:00 by yjung             #+#    #+#             */
/*   Updated: 2022/01/26 15:34:53 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	{
		Bureaucrat yjung1("yjung1", 3);
		Bureaucrat yjung2("yjung2", 1);
		Form form("CPP_05", 2, 5);

		std::cout << yjung1 << std::endl;
		std::cout << yjung2 << std::endl;
		std::cout << form << std::endl;

		yjung1.signForm(form);
		std::cout << form << std::endl;
		yjung2.signForm(form);
		std::cout << form << std::endl;
	}
	// system("leaks ex01");
	return (0);
}
