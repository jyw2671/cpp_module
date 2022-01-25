/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:15:49 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 19:15:51 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
}

WrongCat::WrongCat(WrongCat const &c) : WrongAnimal(c) {
}

WrongCat::~WrongCat() {
}

WrongCat &WrongCat::operator=(WrongCat const &c) {
	this->WrongAnimal::operator=(c);
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "Meow!!" << std::endl;
}
