/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:11:54 by yjung             #+#    #+#             */
/*   Updated: 2022/01/24 11:28:02 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	private :
		int value;
		static const int fractionalBits = 8;
	public :
		Fixed();
		~Fixed();
		Fixed(const Fixed& src);
		Fixed& operator=(const Fixed& src);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed(const int c);
		Fixed(const float f);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif
