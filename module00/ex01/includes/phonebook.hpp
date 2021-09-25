/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 06:05:15 by yjung             #+#    #+#             */
/*   Updated: 2021/09/17 14:40:47 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Phonebook {
	private :
		std::string	first_name[8];
		std::string	last_name[8];
		std::string	nickname[8];
		std::string	phone_number[8];
		std::string	darkest_secret[8];
	public :
		Phonebook();
		int		index;
		void	Add();
		void	showTable(int size);
		void	showInfo(int i);
};

#endif
