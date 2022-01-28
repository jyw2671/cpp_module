/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:35:01 by yjung             #+#    #+#             */
/*   Updated: 2022/01/28 10:41:04 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(INTERN_HPP)
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern {

	private:

	public:
		Intern() {}
		Intern(Intern const &) {}
		Intern &operator=(Intern const &) {
			return (*this);
		}
		~Intern() {}

		Form *makeForm(std::string const &formName, std::string const &target);

		class CheckFormException : public std::exception {
			public:
				const char *what() const throw() {
					return ("Intern can't create this Form");
				}
		};
};

#endif
