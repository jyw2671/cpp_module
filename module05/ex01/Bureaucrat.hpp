/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:14:28 by yjung             #+#    #+#             */
/*   Updated: 2022/01/27 16:23:12 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Form;

class Bureaucrat {

	private:
		const std::string name;
		int grade;
		Bureaucrat() : name("") {}

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &);
		~Bureaucrat();
		Bureaucrat& operator=(Bureaucrat const &);

		const std::string getName() const;
		int getGrade() const;
		void incrementGrade(int amount = 1);
		void decrementGrade(int amount = 1);

		void signForm(Form &form);

		class GradeTooHighException : public std::exception {
			public :
				virtual const char* what() const throw() {
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

std::ostream& operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif
