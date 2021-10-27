/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:33:00 by yjung             #+#    #+#             */
/*   Updated: 2021/10/26 16:18:01 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "str : " << &str << ", " << str << std::endl;
	std::cout << "ptr : " << stringPTR << ", " << *stringPTR << std::endl;
	std::cout << "ref : " << &stringREF << ", " << stringREF << std::endl;
	return (0);
}
