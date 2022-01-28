/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:38:23 by yjung             #+#    #+#             */
/*   Updated: 2022/01/28 10:41:11 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Form *Intern::makeForm(std::string const &formName, std::string const &target) {
	const std::string checkList[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"};

	Form *(*formList[3])(std::string const &target) = {
		&ShrubberyCreationForm::create,
		&RobotomyRequestForm::create,
		&PresidentialPardonForm::create};

	for (int i = 0; i < 3; ++i) {
		if (formName == checkList[i]) {
			std::cout << "Intern creates " << formName << std::endl;
			return (formList[i](target));
		}
	}
	throw Intern::CheckFormException();
}
