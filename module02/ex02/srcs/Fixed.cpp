/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:04:28 by yjung             #+#    #+#             */
/*   Updated: 2022/01/24 14:35:33 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	// std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const int c) {
	// std::cout << "Int constructor called" << std::endl;
	value = c << fractionalBits;
}

Fixed::Fixed(const float f) {
	// std::cout << "Float constructor called" << std::endl;
	value = (int)roundf((f * (1 << this->fractionalBits)));
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& src) {
	// std::cout << "Assignation operator called" << std::endl;
	this->value = src.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed& src){
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

int Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(int const raw) {
	value = raw;
}

float Fixed::toFloat(void) const {
	return ((float)this->value / (1 << fractionalBits));
}

int Fixed::toInt(void) const {
	return (this->value >> fractionalBits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed) {
	return (out << fixed.toFloat());
}

bool Fixed::operator>(const Fixed& c) const {
	return (this->value > c.value);
}

bool Fixed::operator<(const Fixed& c) const {
	return (this->value < c.value);
}

bool Fixed::operator>=(const Fixed& c) const {
	return (this->value >= c.value);
}

bool Fixed::operator<=(const Fixed& c) const {
	return (this->value <= c.value);
}

bool Fixed::operator==(const Fixed& c) const {
	return (this->value == c.value);
}

bool Fixed::operator!=(const Fixed& c) const {
	return (this->value != c.value);
}

Fixed Fixed::operator+(const Fixed& c) const {
	Fixed tmp;
	tmp.setRawBits(this->value + c.value);
	return (tmp);
}

Fixed Fixed::operator-(const Fixed& c) const {
	Fixed tmp;
	tmp.setRawBits(this->value - c.value);
	return (tmp);
}

Fixed Fixed::operator*(const Fixed& c) const {
	Fixed tmp;
	tmp.setRawBits((this->value * c.value) / (1 << this->fractionalBits));
	return (tmp);
}

Fixed Fixed::operator/(const Fixed& c) const {
	Fixed tmp;
	tmp.setRawBits((this->value / c.value) * (1 << this->fractionalBits));
	return (tmp);
}

Fixed& Fixed::operator++(void) {
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	this->value++;
	return (tmp);
}

Fixed& Fixed::operator--(void) {
	this->value--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	this->value--;
	return (tmp);
}

Fixed&	Fixed::min(Fixed& a, Fixed &b) {
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed &b) {
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a > b)
		return (a);
	return (b);
}
