/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 14:04:07 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 12:17:36 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

	public :
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string  const &name);
		ScavTrap(ScavTrap const &c);
		ScavTrap& operator=(const ScavTrap& c);

		virtual void attack(std::string const &target);
		virtual void takeDamage(unsigned int amount);
		virtual void beRepaired(unsigned int amount);

		void guardGate();
};

#endif
