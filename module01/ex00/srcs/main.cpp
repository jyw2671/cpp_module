/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 09:21:25 by yjung             #+#    #+#             */
/*   Updated: 2021/10/26 16:13:10 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

const std::string RAND_NAME[] = {
	"A",
	"B",
	"C",
	"D",
	"E",
	"F",
	"G",
	"H"};

int	main()
{
	std::srand((unsigned int)std::time(NULL));

	Zombie stackZombie = Zombie("stackZombie");
	stackZombie.announce();

	Zombie *heapZombie = newZombie("heapZombie");
	heapZombie->announce();
	delete heapZombie;

	for (int i = 0; i < 2; ++i)
		randomChump(RAND_NAME[rand() % 8]);
	// system("leaks zombie");
	return (0);
}
