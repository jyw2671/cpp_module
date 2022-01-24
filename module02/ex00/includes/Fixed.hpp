/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:33:06 by yjung             #+#    #+#             */
/*   Updated: 2021/10/27 15:07:57 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int value;
		static const int fractionalBits = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &src);
		Fixed& operator=(Fixed const &src);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
