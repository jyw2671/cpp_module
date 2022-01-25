/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:18:39 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 19:18:41 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

	private:
		Brain *brain;

	public:
		Dog();
		Dog(Dog const &);
		~Dog();
		Dog &operator=(Dog const &);

		void makeSound() const;
		Brain *getBrain() const;
};

#endif
