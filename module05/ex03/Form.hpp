/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:36:56 by yjung             #+#    #+#             */
/*   Updated: 2022/01/27 16:59:23 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(FORM_HPP)
#define FORM_HPP

#include <iostream>
#include <fstream>

class Bureaucrat;

class Form {

	private:
		const std::string target;
		const std::string name;
		bool sign;
		const int signGrade;
		const int execGrade;
		Form() : target(""), name(""), signGrade(1), execGrade(1){};

	public:
		Form(std::string const &target, std::string const &name, int signGrade, int execGrade);
		virtual ~Form();
		Form(Form const &c);
		Form &operator=(Form const &c);

		std::string getTarget() const;
		std::string getName() const;
		bool getSign() const;
		int getSignGrade() const;
		int getExecGrade() const;

		void beSigned(Bureaucrat const &bureaucrat);

		void execute(Bureaucrat const &executor) const;

		virtual void action(Bureaucrat const &executor) const = 0;

		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw() {
					return ("Grade too low");
				}
		};

		class NotSignedException : public std::exception {
			public:
				const char *what() const throw() {
					return ("Not signed");
				}
		};
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif
