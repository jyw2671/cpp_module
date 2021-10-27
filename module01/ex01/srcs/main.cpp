/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:09:08 by yjung             #+#    #+#             */
/*   Updated: 2021/10/26 16:11:37 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies;

	zombies = zombieHorde(10, "N_zombie");
	delete[] zombies;
	// system("leaks zombie");
	return (0);
}
