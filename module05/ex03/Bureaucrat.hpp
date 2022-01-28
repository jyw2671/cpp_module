/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:26:43 by yjung             #+#    #+#             */
/*   Updated: 2022/01/27 10:37:40 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(BURECRAT_HPP)
#define BURECRAT_HPP

#include <iostream>

class Form;

class Bureaucrat {

	private:
		const std::string name;
		int grade;
		Bureaucrat() : name(""){};

	public:
		Bureaucrat(std::string const &name, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &c);
		Bureaucrat &operator=(Bureaucrat const &c);

		std::string getName() const;
		// const std::string getName() const;
		int getGrade() const;
		void increaseGrade(int amount);
		// void increaseGrade(int amount = 1);
		void decreaseGrade(int amount);
		// void decreaseGrade(int amount = 1);

		void signForm(Form &form);
		void executeForm(Form &form);

		class GradeTooHighException : public std::exception {
			public :
				 const char* what() const throw() {
					return ("Grade Too High");
				}
		};

		class GradeTooLowException : public std::exception {
			public :
				virtual const char* what() const throw() {
					return ("Grade Too Low");
				}
		};
};

std::ostream &operator<<(std::ostream &cout, Bureaucrat const &bureaucrat);

#endif
