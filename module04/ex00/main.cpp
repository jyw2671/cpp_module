/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:15:31 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 19:15:32 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal *meta = new Animal();
		const Animal *dog = new Dog();
		const Animal *cat = new Cat();
		const WrongAnimal *wrong = new WrongCat();

		std::cout << dog->getType() << std::endl;
		std::cout << cat->getType() << std::endl;

		meta->makeSound();
		cat->makeSound();
		dog->makeSound();

		wrong->makeSound();

		delete meta;
		delete cat;
		delete dog;
		delete wrong;
	}
	system("leaks ex00");
	return (0);
}
