/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:22:40 by yjung             #+#    #+#             */
/*   Updated: 2022/01/27 16:51:08 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ROBOTOMYREQUESTFORM_HPP)
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form {

	private:
		RobotomyRequestForm() : Form("", "", 1, 1){};

	public:
		RobotomyRequestForm(std::string const &target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &c);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &c);

		void action(Bureaucrat const &executor) const;
};

#endif
