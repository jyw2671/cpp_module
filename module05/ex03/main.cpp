/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:49:21 by yjung             #+#    #+#             */
/*   Updated: 2022/01/28 10:27:39 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

void test_form(Form &form, Bureaucrat &correct, Bureaucrat &wrong)
{
	std::cout << "------------------   signForm   ------------------" << std::endl;
	wrong.signForm(form);
	correct.signForm(form);
	std::cout << "------------------   executeForm   ------------------" << std::endl;
	wrong.executeForm(form);
	correct.executeForm(form);
}

int main()
{
	{
		srand(time(NULL));

		Bureaucrat yjung("yjung", 1);
		Bureaucrat wrong("wrong", 150);
		Intern intern;

		Form *form;

		std::cout << "------------------   ShrubberyCreationForm   ------------------" << std::endl;
		form = intern.makeForm("ShrubberyCreationForm", "target");
		test_form(*form, yjung, wrong);
		delete form;
		std::cout << std::endl << "------------------   RobotomyRequestForm   ------------------" << std::endl;
		form = intern.makeForm("RobotomyRequestForm", "target");
		test_form(*form, yjung, wrong);
		delete form;
		std::cout << std::endl << "------------------   PresidentialPardonForm   ------------------" << std::endl;
		form = intern.makeForm("PresidentialPardonForm", "target");
		test_form(*form, yjung, wrong);
		delete form;

		try {
			std::cout << std::endl << "------------------   WrongName   ------------------" << std::endl;
			form = intern.makeForm("robotomy request", "target");
			test_form(*form, yjung, wrong);
			delete form;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	// system("leaks ex03");
	return 0;
}
