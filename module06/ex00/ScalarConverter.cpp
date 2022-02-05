/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:44:53 by yjung             #+#    #+#             */
/*   Updated: 2022/02/05 16:36:53 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cmath>

std::string const &ScalarConverter::getValue() const {
	return (this->value);
}

char ScalarConverter::toChar() const {
	int n;

	try {
		n = std::stoi(this->value);
		if (n < 0 || n > 255) {
			throw ScalarConverter::ImpossibleException();
		}
	}
	catch (...) {
		throw ScalarConverter::ImpossibleException();
	}
	if (!isprint(n)) {
		throw ScalarConverter::NonDisplayableException();
	}
	return (static_cast<char>(n));
}

int ScalarConverter::toInt() const {
	int n;

	try {
		n = std::stoi(this->value);
	}
	catch (...) {
		throw ScalarConverter::ImpossibleException();
	}
	return (n);
}

float ScalarConverter::toFloat() const {
	float f;

	try {
		f = std::stof(this->value);
	}
	catch (...) {
		throw ScalarConverter::ImpossibleException();
	}
	return (f);
}

double ScalarConverter::toDouble() const {
	float d;

	try {
		d = std::stod(this->value);
	}
	catch (...) {
		throw ScalarConverter::ImpossibleException();
	}
	return (d);
}

std::ostream &operator<<(std::ostream &os, const ScalarConverter &scalar) {
	os << "char: ";
	try {
		char c = scalar.toChar();
		os << "'" << c << "'" << std::endl;
	}
	catch (const std::exception &e) {
		os << e.what() << std::endl;
	}

	os << "int: ";
	try {
		os << scalar.toInt() << std::endl;
	}
	catch (const std::exception &e) {
		os << e.what() << std::endl;
	}

	os << "float: ";
	try {
		float f = scalar.toFloat();

		if (std::isnan(f) && std::signbit(f))
			os << "-";
		os << f;
		if (!std::isnan(f) && f - (int)f == 0)
			os << ".0";
		os << "f" << std::endl;
	}
	catch (const std::exception &e) {
		os << e.what() << std::endl;
	}

	os << "Double: ";
	try {
		double d = scalar.toDouble();

		if (std::isnan(d) && std::signbit(d))
			os << "-";
		os << d;
		if (!std::isnan(d) && d - (int)d == 0)
			os << ".0";
		os << std::endl;
	}
	catch (const std::exception &e) {
		os << e.what() << std::endl;
	}
	return (os);
}
