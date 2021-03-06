/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:58:10 by yjung             #+#    #+#             */
/*   Updated: 2022/01/14 05:44:04 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPONE_HPP
#	define WEAPONE_HPP

#include <iostream>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon(std::string type);
		void setType(std::string type);
		const std::string &getType(void) const;
		~Weapon();
};

#endif
