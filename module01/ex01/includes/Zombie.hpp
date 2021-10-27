/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:02:33 by yjung             #+#    #+#             */
/*   Updated: 2021/09/19 11:09:37 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		std::string name;
		Zombie();
		Zombie(std::string name);
		void announce(void);
		~Zombie();
};

Zombie *zombieHorde(int N, std::string name);

#endif
