/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:59:06 by yjung             #+#    #+#             */
/*   Updated: 2021/09/19 11:59:07 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *weapon;
		std::string name;

		HumanB();

	public:
		HumanB(std::string name);
		void attack();
		void setWeapon(Weapon &weapon);
		~HumanB();
};

#endif
