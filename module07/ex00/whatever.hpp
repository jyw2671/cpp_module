/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 10:55:22 by yjung             #+#    #+#             */
/*   Updated: 2022/02/06 12:09:34 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T& a, T& b) {
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T max(T& a, T& b) {
	if (a > b)
		return (a);
	else
		return (b);
}

#endif
