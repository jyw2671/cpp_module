/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:20:02 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 12:43:13 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap " << "default constructor." << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << getName() << " destructor." << std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name) {
	std::cout << "FragTrap " << name << " constructor." << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &c) : ClapTrap(c) {
	std::cout << "FragTrap:: ";
}

FragTrap &FragTrap::operator=(FragTrap const &c) {
	std::cout << "FragTrap:: ";
	ClapTrap::operator=(c);
	return (*this);
}

void FragTrap::attack(std::string const & target) {
	std::cout << "FragTrap:: ";
	this->ClapTrap::attack(target);
}

void FragTrap::takeDamage(unsigned int amount) {
	std::cout << "FragTrap:: ";
	this->ClapTrap::takeDamage(amount);
}

void FragTrap::beRepaired(unsigned int amount) {
	std::cout << "FragTrap:: ";
	this->ClapTrap::beRepaired(amount);
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << getName() << " : HighFive Guys" << std::endl;
}
