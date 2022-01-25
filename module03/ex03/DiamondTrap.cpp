/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:11:26 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 13:15:32 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap(), FragTrap(){
	std::cout << "DiamondTrap " << "default constructor." << std::endl;
	this->name = "default";
	this->FragTrap::hitPoints = 100;
	this->ScavTrap::energyPoints = 50;
	this->FragTrap::attackDamage = 30;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->name << " destructor." << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(){
	std::cout << "DiamondTrap " << name << " constructor." << std::endl;
	this->name = name;
	this->FragTrap::hitPoints = 100;
	this->ScavTrap::energyPoints = 50;
	this->FragTrap::attackDamage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &c) : ClapTrap(c) {
	std::cout << "DiamondTrap:: ";
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &c) {
	std::cout << "DiamondTrap:: ";
	this->ClapTrap::operator=(c);
	return (*this);
}

void DiamondTrap::attack(std::string const &target) {
	std::cout << "DiamondTrap:: ";
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	if (this->hitPoints <= 0)
		this->hitPoints = 0;
	std::cout << "DiamondTrap " << this->name << " took " << amount << " damages." << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	std::cout << "DiamondTrap " << this->name << " is repaired " << amount << ". Repaired complete" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap Name : " << this->name << ". ClapTrap Name : " << ClapTrap::getName() << "." << std::endl;
}
