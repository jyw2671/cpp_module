/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 14:19:31 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 13:15:29 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap yjung("yjung");

	yjung.attack("target");
	yjung.takeDamage(yjung.getAD()); //30
	yjung.beRepaired(yjung.getEP()); // 50
	yjung.guardGate();
	yjung.highFivesGuys();
	yjung.whoAmI();
	return (0);
}
