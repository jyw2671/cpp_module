/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:09:31 by yjung             #+#    #+#             */
/*   Updated: 2022/01/27 12:55:53 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
	this->grade = c.grade;
	return (*this);
}

const std::string &Bureaucrat::getName() const {
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

std::ostream& operator<<(std::ostream &out, Bureaucrat const &bureaucrat) {
	return (out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade());
}
