/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 12:09:16 by yjung             #+#    #+#             */
/*   Updated: 2022/02/05 13:52:57 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <iostream>
#include <string>

typedef struct{
	int		age;
	std::string	name;
	double	score;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
