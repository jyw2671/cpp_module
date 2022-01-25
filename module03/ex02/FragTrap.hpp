/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:20:08 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 12:17:28 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	public:
		FragTrap();
		~FragTrap();
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &c);
		FragTrap &operator=(FragTrap const &c);

		virtual void attack(std::string const &target);
		virtual void takeDamage(unsigned int amount);
		virtual void beRepaired(unsigned int amount);

		void highFivesGuys(void);
};

#endif
