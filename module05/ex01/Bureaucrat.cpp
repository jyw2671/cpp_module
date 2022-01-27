/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:20:49 by yjung             #+#    #+#             */
/*   Updated: 2022/01/27 13:16:38 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name){
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &c) : name(c.getName()) {
	*this = c;
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &c) {
	this->grade = c.getGrade();
	return (*this);
}

const std::string Bureaucrat::getName() const {
	return (this->name);
}

int Bureaucrat::getGrade() const {
	return (this->grade);
}

void Bureaucrat::incrementGrade(int amount) {
	if (this->grade - amount < 1)
		throw GradeTooHighException();
	this->grade -= amount;
}

void Bureaucrat::decrementGrade(int amount) {
	if (this->grade + amount > 150)
		throw GradeTooLowException();
	this->grade += amount;
}

void Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << this->name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << this->name << " cannot sign " << form.getName() \
			<< " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream &out, Bureaucrat const &bureaucrat) {
	return (out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade());
}
