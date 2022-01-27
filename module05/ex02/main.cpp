/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:49:21 by yjung             #+#    #+#             */
/*   Updated: 2022/01/27 17:10:57 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void test_form(Form &form, Bureaucrat &correct, Bureaucrat &wrong)
{
	wrong.signForm(form);
	correct.executeForm(form);
	correct.signForm(form);
	std::cout << "-----------------------" << std::endl;
	wrong.executeForm(form);
	correct.executeForm(form);
}

int main()
{
	{
		srand(time(NULL));

		Bureaucrat yjung("yjung", 1);
		Bureaucrat wrong("wrong", 150);

		ShrubberyCreationForm form1("target");
		RobotomyRequestForm form2("target");
		PresidentialPardonForm form3("target");
		std::cout << "------------------   ShrubberyCreationForm   ------------------" << std::endl;
		test_form(form1, yjung, wrong);
		std::cout << std::endl << "------------------   RobotomyRequestForm   -------------------" << std::endl;
		test_form(form2, yjung, wrong);
		std::cout << std::endl << "------------------   PresidentialPardonForm   -------------------" << std::endl;
		test_form(form3, yjung, wrong);
	}
	// system("leaks ex02");
	return (0);
}
