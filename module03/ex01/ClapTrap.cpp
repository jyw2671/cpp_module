/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 14:53:38 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 11:54:01 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap " << "default constructor." << std::endl;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " destructor." << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) {
	std::cout << "ClapTrap " << name << " constructor." << std::endl;
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &c) {
	std::cout << "ClapTrap copy constructor." << std::endl;
	*this = c;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &c) {
	std::cout << "ClapTrap " << "assignation overloading." << std::endl;
	this->name = c.name;
	this->hitPoints = c.hitPoints;
	this->energyPoints = c.energyPoints;
	this->attackDamage= c.attackDamage;
	return (*this);
}

void ClapTrap::attack(std::string const &target) {
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	if (this->hitPoints <= 0)
		this->hitPoints = 0;
	std::cout << "ClapTrap " << name << " took " << amount << " damages." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	std::cout << "ClapTrap " << name << " is repaired " << amount << ". Repaired complete!" << std::endl;
}

void ClapTrap::setHP(unsigned int amount) {
	this->hitPoints = amount;
}

void ClapTrap::setEP(unsigned int amount) {
	this->energyPoints = amount;
}

void ClapTrap::setAD(unsigned int amount) {
	this->attackDamage = amount;
}

std::string ClapTrap::getName() const {
	return (this->name);
}

unsigned int ClapTrap::getHP() const {
	return (this->hitPoints);
}

unsigned int ClapTrap::getEP() const {
	return (this->energyPoints);
}

unsigned int ClapTrap::getAD() const {
	return (this->attackDamage);
}
