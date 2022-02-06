/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:46:22 by yjung             #+#    #+#             */
/*   Updated: 2022/02/06 16:46:26 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>

class FindException : public std::exception{
	public :
		const char* what() const throw() {
			return ("Not Found Value");
		}
};

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator itr = std::find(container.begin(), container.end(), value);
	if (itr == container.end())
		throw FindException();
	return (itr);
}

#endif
