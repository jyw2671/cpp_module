/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 09:22:02 by yjung             #+#    #+#             */
/*   Updated: 2021/09/19 09:22:04 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <ctime>

class Zombie
{
	private:
		std::string name;
		Zombie();

	public:
		Zombie(std::string name);
		void announce(void);
		~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
