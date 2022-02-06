/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:17:14 by yjung             #+#    #+#             */
/*   Updated: 2022/02/06 13:02:13 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) {}
	int get( void ) const { return this->_n; }
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template<typename T>
void print( T & x )
{
	std::cout << x << std::endl;
	return;
}

template <typename T>
void iter(T *arrPtr, unsigned int len, void (*func)(T &a))
{
	if (arrPtr == NULL || len == 0 || func == NULL)
		return ;
	for (unsigned int i = 0; i < len; i++) {
		func(arrPtr[i]);
	}
}

template <typename T>
void plusOne(T &a)
{
	a += 1;
}

#endif
