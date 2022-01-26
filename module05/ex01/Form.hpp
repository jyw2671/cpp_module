/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:23:35 by yjung             #+#    #+#             */
/*   Updated: 2022/01/26 15:35:58 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form {

	private:
		const std::string name;
		bool isSigned;
		const int gradeSign;
		const int gradeExecute;
		Form() : name("no name"), gradeSign(1), gradeExecute(1) {}

	public:
		Form(std::string name, int gradeSign, int gradeExecute);
		Form(const Form&);
		~Form();
		Form& operator=(Form const &);

		const std::string &getName() const;
		bool getSigned() const;
		int getGradeSign() const;
		int getGradeExecute() const;

		void beSigned(Bureaucrat& b);

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

std::ostream& operator<<(std::ostream& out, Form const &form);

#endif
