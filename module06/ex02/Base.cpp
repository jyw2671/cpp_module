/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:53:45 by yjung             #+#    #+#             */
/*   Updated: 2022/02/05 11:54:19 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base* generate(void)
{
	switch (rand() % 3) {
		case 0:
			std::cout << "A class is made." << std::endl;
			return (new A());
		case 1:
			std::cout << "B class is made." << std::endl;
			return (new B());
		case 2:
			std::cout << "C class is made." << std::endl;
			return (new C());
		default:
			std::cerr << "Error." << std::endl;
			return (NULL);
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try {
		A ref_A = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e) {
	}
	try {
		B ref_B = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e) {
	}
	try {
		C ref_C = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e) {
	}

}
