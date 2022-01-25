/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 14:04:11 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 12:44:01 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap " << "default constructor." << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << getName() << " destructor." << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name) {
	std::cout << "ScavTrap " << name << " constructor." << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &c) : ClapTrap(c) {
	std::cout << "ScavTrap:: ";
}

ScavTrap &ScavTrap::operator=(ScavTrap const &c) {
	std::cout << "ScavTrap:: ";
	ClapTrap::operator=(c);
	return (*this);
}

void ScavTrap::attack(std::string const &target) {
	std::cout << "ScavTrap:: ";
	this->ClapTrap::attack(target);
}

void ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "ScavTrap:: ";
	this->ClapTrap::takeDamage(amount);
}

void ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "ScavTrap:: ";
	this->ClapTrap::beRepaired(amount);
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << getName() << " have enterred in Gate keeper mode." << std::endl;
}
