/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 14:19:31 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 12:17:46 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap a("first");
	FragTrap b;
	FragTrap c("second");

	b = a;
	b.attack(c.getName());
	c.takeDamage(b.getAD());
	c.beRepaired(c.getEP());
	c.highFivesGuys();
	// FragTrap yjung("yjung");

	// std::cout << "---------" << std::endl;
	// yjung.attack("Somting!");
	// yjung.takeDamage(100);
	// yjung.beRepaired(3);
	// yjung.highFivesGuys();
	return (0);
}
