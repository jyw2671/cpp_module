/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:33:31 by yjung             #+#    #+#             */
/*   Updated: 2022/02/06 18:33:32 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {
}

template <typename T>
MutantStack<T>::~MutantStack() {
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &copy) : std::stack<T>(copy) { }

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack<T> const &copy) {
	if (this != &copy) {
		std::stack<T>::operator=(copy);
	}
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() {
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {
	return (this->c.rend());
}
