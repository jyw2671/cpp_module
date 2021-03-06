/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:15:37 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 19:15:38 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "Wrong Animal";
	std::cout << this->type << " is born" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
	this->type = type;
	std::cout << this->type << " is born" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << this->type << " is dead" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &c) {
	*this = c;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &c) {
	this->type = c.getType();
	return (*this);
}

std::string const &WrongAnimal::getType() const {
	return (this->type);
}

void WrongAnimal::makeSound() const {
	std::cout << "Wrong Animal!" << std::endl;
}
