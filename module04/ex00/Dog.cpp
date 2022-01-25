/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:15:19 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 19:15:20 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
}

Dog::Dog(Dog const &c) : Animal(c) {
}

Dog::~Dog() {
}

Dog &Dog::operator=(Dog const &c) {
	this->Animal::operator=(c);
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Bow-wow!" << std::endl;
}
