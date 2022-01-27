/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:23:17 by yjung             #+#    #+#             */
/*   Updated: 2022/01/27 16:50:51 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PRESIDENTIALPARDONFORM_HPP)
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form {

	private:
		PresidentialPardonForm() : Form("", "", 1, 1){};

	public:
		PresidentialPardonForm(std::string const &target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &c);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &c);

		void action(Bureaucrat const &executor) const;
};

#endif
