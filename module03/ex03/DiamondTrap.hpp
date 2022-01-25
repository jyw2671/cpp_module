/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:12:03 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 12:46:05 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	private :
		std::string name;

	public :
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string const &name);
		DiamondTrap(DiamondTrap const &c);
		DiamondTrap &operator=(DiamondTrap const &c);

		virtual void attack(std::string const &target);
		virtual void takeDamage(unsigned int amount);
		virtual void beRepaired(unsigned int amount);

		void whoAmI();
};

#endif
