/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 04:16:24 by yjung             #+#    #+#             */
/*   Updated: 2021/09/25 14:48:27 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	index = 0;
}

void	Phonebook::Add()
{
	std::cout << "first_name : ";
	getline(std::cin, first_name[index % 8]);
	std::cout << "last_name : ";
	getline(std::cin, last_name[index % 8]);
	std::cout << "nick_name : ";
	getline(std::cin, nickname[index % 8]);
	std::cout << "phone_number : ";
	getline(std::cin, phone_number[index % 8]);
	std::cout << "darkest_secret : ";
	getline(std::cin, darkest_secret[index % 8]);
	index++;
}

static void print_element(std::string name)
{
	int	len;

	len = name.length();
	if (len > 10)
		std::cout << std::setw(10) << name.substr(0, 9).append(".");
	else
		std::cout << std::setw(10) << name;
	std::cout << "|";
}

void	Phonebook::showTable(int size)
{
	int i;

	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|" << std::setw(10) << std::right << "index";
	std::cout << "|" << std::setw(10) << std::right << "firstName";
	std::cout << "|" << std::setw(10) << std::right << "lastName";
	std::cout << "|" << std::setw(11) << std::right << "nickName|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (i = 0; i < size; i++)
	{
		std::cout << "|" << std::setw(10) << std::right << i + 1 << "|";
		print_element(first_name[i]);
		print_element(last_name[i]);
		print_element(nickname[i]);
		std::cout << std::endl;
	}
}

void	Phonebook::showInfo(int i)
{
	std::cout << "first name : " << first_name[i] << std::endl;
	std::cout << "last name : " << last_name[i] << std::endl;
	std::cout << "nickname : " << nickname[i] << std::endl;
	std::cout << "phone number : " << phone_number[i] << std::endl;
	std::cout << "darkest secret : " << darkest_secret[i] << std::endl;
}
