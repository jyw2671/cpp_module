/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 12:09:00 by yjung             #+#    #+#             */
/*   Updated: 2022/02/05 14:08:36 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data *ptr) {
	char *raw = new char[sizeof(int) + ptr->name.size() + sizeof(double)];
	*(reinterpret_cast<int *>(raw)) = ptr->age;
	*(reinterpret_cast<std::string *>(raw + sizeof(int))) = ptr->name;
	*(reinterpret_cast<double *>(raw + sizeof(int) + ptr->name.size() + 1)) = ptr->score;

	return (reinterpret_cast<uintptr_t>(raw));

	// struct class address cast
	// network problem
	// return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw) {
	Data *deserial = new Data;
	char *ptr = reinterpret_cast<char *>(raw);

	deserial->age = *reinterpret_cast<int *>(ptr);
	deserial->name = *reinterpret_cast<std::string *>(ptr + sizeof(int));
	deserial->score = *reinterpret_cast<double *>(ptr + sizeof(int) + deserial->name.size() + 1);

	return (deserial);
	// return (reinterpret_cast<Data *>(raw));
}
