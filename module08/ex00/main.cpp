/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:46:23 by yjung             #+#    #+#             */
/*   Updated: 2022/02/06 16:46:28 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <vector>
#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	int	ivalue1 = 2, ivalue2 = 5, ivalue3 = 15;

	for (int i = 0; i < 10; i++) {
		vec.push_back(i);
	}

	std::cout << "--------------------------------------" << std::endl;

	for (int i = 0; i < (int)vec.size(); i++) {
		std::cout << vec[i] << ' ';
	}
	std::cout << std::endl;

	std::cout << "ivalue1 : " << ivalue1;
	std::cout << ", ivalue2 : " << ivalue2;
	std::cout << ", ivalue3 : " << ivalue3 << std::endl;;

	std::vector<int>::iterator it;

	std::cout << "----------     easyfind()    ---------" << std::endl;

	try {
		easyfind(vec, ivalue1);
		std::cout << "find: " << ivalue1 << std::endl;
		easyfind(vec, ivalue2);
		std::cout << "find: " << ivalue2 << std::endl;
		easyfind(vec, ivalue3);
		std::cout << "find: " << ivalue3 << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------------------------------------" << std::endl;
	return (0);
}
