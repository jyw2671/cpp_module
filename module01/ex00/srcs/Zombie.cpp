/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 09:22:22 by yjung             #+#    #+#             */
/*   Updated: 2021/09/19 10:30:15 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << "> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << "> is dead..." << std::endl;
}
