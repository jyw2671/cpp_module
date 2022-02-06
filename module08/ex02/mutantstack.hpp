/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:33:28 by yjung             #+#    #+#             */
/*   Updated: 2022/02/06 18:33:29 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	~MutantStack();
	MutantStack(const MutantStack<T> &);
	MutantStack<T> &operator=(const MutantStack<T> &);

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();

    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	reverse_iterator rbegin();
	reverse_iterator rend();
};

#endif
