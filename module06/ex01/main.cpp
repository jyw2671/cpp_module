/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 12:08:57 by yjung             #+#    #+#             */
/*   Updated: 2022/02/05 13:52:54 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(void)
{
	{
		Data yjung;

		yjung.age = 26;
		yjung.name = "yjung";
		yjung.score = 47.5;

		uintptr_t out = serialize(&yjung);

		Data* data;
		data = deserialize(out);
		std::cout << "Name: " << data->name << std::endl;
		std::cout << "Age: " << data->age << std::endl;
		std::cout << "Score: " << data->score << std::endl;

		// std::cout << &yjung << std::endl;
		// std::cout << "uintptr_t: " << std::hex << out << std::endl;
		delete data;
	}
	// system("leaks ex01");
	return (0);
}
