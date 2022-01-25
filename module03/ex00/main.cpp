/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 14:04:22 by yjung             #+#    #+#             */
/*   Updated: 2022/01/24 17:39:02 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap yjung("yjung");

	yjung.attack("target");
	yjung.takeDamage(100);
	yjung.beRepaired(5);
	return (0);
}
