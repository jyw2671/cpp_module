/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 13:08:23 by yjung             #+#    #+#             */
/*   Updated: 2021/09/19 13:59:42 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static std::string ft_replace(std::string str, std::string s1, std::string s2)
{
	int	start = 0;
	int	index;

	while ((index = str.find(s1, start)) != -1)
	{
		str.erase(index, s1.length());
		str.insert(index, s2);
		start = index + s2.length();
	}
	return (str);
}

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "Error: Wrong Arugments" << std::endl;
		return (1);
	}

	std::string filename = av[1];
	std::ifstream fin(filename);
	if (!fin.is_open())
	{
		std::cout << "Error: Wrong filename" << std::endl;
		return (1);
	}

	std::ofstream fout(filename.append(".replace"));
	if (!fout.is_open())
	{
		fin.close();
		std::cout << "Error: file open error" << std::endl;
		return (1);
	}

	std::string s1 = av[2];
	std::string s2 = av[3];
	while (true)
	{
		std::string line;
		std::getline(fin, line);

		fout << ft_replace(line, s1, s2);
		if (fin.eof())
			break;
		fout << std::endl;
	}
	fin.close();
	fout.close();
	return (0);
}
