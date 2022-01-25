/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 14:18:09 by yjung             #+#    #+#             */
/*   Updated: 2022/01/23 14:49:28 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("first");
	ScavTrap b;
	ClapTrap c("second");

	b = a;
	b.attack(c.getName());
	c.takeDamage(b.getAD());
	c.beRepaired(c.getEP());
	b.guardGate();
	return (0);
}
