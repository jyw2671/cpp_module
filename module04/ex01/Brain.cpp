/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:17:22 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 19:17:23 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	const std::string ideas[] = {
		"A",
		"B",
		"C",
		"D",
		"E"
	};
	std::cout << "Constructor Brain:";
	for (int i = 0; i < 100; ++i)
	{
		this->ideas[i] = ideas[rand() % (sizeof(ideas) / sizeof(std::string))];
		std::cout << " " << this->ideas[i];
	}
	std::cout << std::endl;
}

Brain::Brain(Brain const &c) {
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = c.getIdea(i);
}

Brain &Brain::operator=(Brain const &c) {
	if (this != &c)
	{
		for (int i = 0; i < 100; ++i)
			this->ideas[i] = c.getIdea(i);
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Destructor Brain: ";
	for (int i = 0; i < 100; ++i) {
		std::cout << " " << this->ideas[i];
	}
	std::cout << std::endl;
}

std::string const &Brain::getIdea(int index) const {
	return (this->ideas[index]);
}
