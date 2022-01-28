/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:34:08 by yjung             #+#    #+#             */
/*   Updated: 2022/01/27 10:34:09 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name) {
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(Bureaucrat const &c) : name(c.name) {
	this->grade = c.grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &c) {
	if (this != &c)
		this->grade = c.grade;
	return (*this);
}

std::string Bureaucrat::getName() const {
	return (this->name);
}

int Bureaucrat::getGrade() const {
	return (this->grade);
}

void Bureaucrat::increaseGrade(int amount) {
	if (this->grade - amount <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade - amount > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade -= amount;
}

void Bureaucrat::decreaseGrade(int amount) {
	if (this->grade + amount <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade + amount > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += amount;
}

void Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << *this << " signs " << form << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << *this << " cannot sign " << form << " because " << e.what() << std::endl;
	}
}
void Bureaucrat::executeForm(Form &form) {
	try {
		form.action(*this);
		std::cout << *this << " executes " << form << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << *this << " cannot execute " << form << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}
