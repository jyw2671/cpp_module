/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:17:45 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 19:17:46 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	this->brain = new Brain();
}

Dog::Dog(Dog const &c) : Animal(c) {
	this->brain = new Brain(*c.getBrain());
}

Dog::~Dog() {
	delete this->brain;
}

Dog &Dog::operator=(Dog const &c) {
	if (this != &c)
	{
		this->~Dog();
		this->brain = new Brain(*c.getBrain());
		this->Animal::operator=(c);
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Bow-wow!" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->brain);
}
