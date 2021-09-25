/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 06:05:04 by yjung             #+#    #+#             */
/*   Updated: 2021/09/25 16:54:27 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static int	getIndex(int size)
{
	int	input;

	std::cout << "Enter index to get full page : ";
	std::cin >> input;
	if (std::cin.fail() || input < 1 || input >= size + 1)
	{
		std::cout << "Wrong Index" << std::endl;
		std::cin.clear();
		std::cin.ignore();
		return (getIndex(size));
	}
	else
		return (input - 1);
}

static void	search(Phonebook &phonebook)
{
	int	size;

	if (phonebook.index == 0)
	{
		std::cout << "After adding it, SEARCH" << std::endl;
		return ;
	}
	if (phonebook.index > 8)
		size = 8;
	else
		size = phonebook.index;
	phonebook.showTable(size);
	phonebook.showInfo(getIndex(size));
	std::cin.ignore();
}

int	main()
{
	Phonebook	phonebook;
	std::string	command;

	while (!std::cin.eof())
	{
		std::cout << "Input Command (ADD / SEARCH / EXIT)" << std::endl;
		std::cout << "     : ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.Add();
		else if (command == "SEARCH")
			search(phonebook);
		else if (command == "EXIT")
			break;
		else
		{
			std::cout << "Error: wrong COMMAND" << std::endl;
			std::cout << "you can only use (ADD, SEARCH, EXIT)" << std::endl;
		}
	}
	return (0);
}
