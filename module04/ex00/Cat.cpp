/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:15:02 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 19:15:04 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
}

Cat::Cat(Cat const &c) : Animal(c) {
}

Cat::~Cat() {
}

Cat &Cat::operator=(Cat const &c) {
	this->Animal::operator=(c);
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
