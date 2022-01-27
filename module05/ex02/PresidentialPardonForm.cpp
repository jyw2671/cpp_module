/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:23:57 by yjung             #+#    #+#             */
/*   Updated: 2022/01/27 16:57:44 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form(target, "PresidentialPardonForm", 25, 5) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &c) : Form(c) {
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &c) {
	this->Form::operator=(c);
	return (*this);
}

void PresidentialPardonForm::action(Bureaucrat const &executer) const {
	this->Form::execute(executer);
	std::cout << "The " << this->getTarget() << " has been pardoned by " << executer.getName() << "." << std::endl;
}
