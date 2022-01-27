/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:38:59 by yjung             #+#    #+#             */
/*   Updated: 2022/01/27 10:39:00 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const &target, std::string const &name, int signGrade, int execGrade) : target(target), name(name), signGrade(signGrade), execGrade(execGrade) {
}

Form::~Form() {
}

Form::Form(Form const &c) : target(c.target), name(c.getName()), signGrade(c.getSignGrade()), execGrade(c.getExecGrade()) {
	this->sign = c.sign;
}

Form &Form::operator=(Form const &c) {
	this->sign = c.sign;
	return (*this);
}

void Form::beSigned(Bureaucrat const &bureaucrat) {
	if (bureaucrat.getGrade() > this->execGrade)
		throw Form::GradeTooLowException();
	this->sign = true;
}

std::string Form::getTarget() const {
	return (this->target);
}

std::string Form::getName() const {
	return (this->name);
}

bool Form::getSign() const {
	return (this->sign);
}

int Form::getSignGrade() const {
	return (this->signGrade);
}

int Form::getExecGrade() const {
	return (this->execGrade);
}

void Form::execute(Bureaucrat const &executor) const {
	if (this->getSign() == false)
		throw Form::NotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Form const &form) {
	out << "<" << form.getName() << " sign : " << form.getSignGrade() << ", exec : " << form.getExecGrade();
	if (form.getSign())
		out << ", signed";
	else
		out << ", not signed";
	out << ">";
	return (out);
}
