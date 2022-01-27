/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:22:47 by yjung             #+#    #+#             */
/*   Updated: 2022/01/27 10:22:48 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form(target, "RobotomyRequestForm", 72, 45) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &c) : Form(c) {
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &c) {
	this->Form::operator=(c);
	return (*this);
}

void RobotomyRequestForm::action(Bureaucrat const &executer) const {
	this->Form::execute(executer);
	std::cout << "\a";

	if (std::rand() % 2 == 0)
		std::cout << this->getTarget() << " is a robot!\n";
	else
		std::cout << this->getTarget() << " is human!\n";
}
