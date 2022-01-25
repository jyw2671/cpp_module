/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:18:26 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 19:18:27 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	this->brain = new Brain();
}

Cat::Cat(Cat const &c) : Animal(c) {
	this->brain = new Brain(*c.getBrain());
}

Cat::~Cat() {
	delete this->brain;
}

Cat &Cat::operator=(Cat const &c) {
	if (this != &c)
	{
		this->~Cat();
		this->brain = new Brain(*c.getBrain());
		this->Animal::operator=(c);
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->brain);
}
