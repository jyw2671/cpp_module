/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:43:39 by yjung             #+#    #+#             */
/*   Updated: 2022/02/05 16:27:19 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER__HPP
# define SCALARCONVERTER__HPP

#include <iostream>
#include <string>

class ScalarConverter
{
	private:
		const std::string value;
		ScalarConverter() : value("error"){};

	public:
		ScalarConverter(std::string const &value) : value(value){};
		ScalarConverter(ScalarConverter const &c) {
			*this = c;
		};
		ScalarConverter& operator=(ScalarConverter const &) {
			return (*this);
		};
		~ScalarConverter(){};
		std::string const &getValue() const;
		char toChar() const;
		int toInt() const;
		float toFloat() const;
		double toDouble() const;

		class ImpossibleException : public std::exception {
			const char *what() const throw() {
				return "impossible";
			}
		};
		class NonDisplayableException : public std::exception {
			const char *what() const throw() {
				return "Non displayable";
			}
		};
};

std::ostream &operator<<(std::ostream &os, ScalarConverter const &scalar);

#endif
