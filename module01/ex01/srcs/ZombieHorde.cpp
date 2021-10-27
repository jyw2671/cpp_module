/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:08:29 by yjung             #+#    #+#             */
/*   Updated: 2021/09/19 11:26:56 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *newZombies = new Zombie[N];

	for (int i = 0; i < N; ++i)
		newZombies[i].name = name;
	for (int i = 0; i < N; ++i)
		newZombies[i].announce();
	return (newZombies);
}
