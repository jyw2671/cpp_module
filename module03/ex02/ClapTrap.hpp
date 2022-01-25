/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 14:49:18 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 12:17:16 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

	protected :
		std::string		name;
		unsigned int	hitPoints;		// HP
		unsigned int	energyPoints;	// EP
		unsigned int	attackDamage;	// AD

	public :
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string const &name);
		ClapTrap(ClapTrap const &c);
		ClapTrap &operator=(ClapTrap const &c);

		virtual void attack(std::string const &target);
		virtual void takeDamage(unsigned int amount);
		virtual void beRepaired(unsigned int amount);

		void setHP(unsigned int amount);
		void setEP(unsigned int amount);
		void setAD(unsigned int amount);

		std::string getName() const;
		unsigned int getHP() const;
		unsigned int getEP() const;
		unsigned int getAD() const;
};

#endif
