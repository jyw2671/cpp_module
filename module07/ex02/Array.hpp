/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:08:38 by yjung             #+#    #+#             */
/*   Updated: 2022/02/06 14:08:39 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array {
private:
	T *arr;
	unsigned int arrSize;

public:
	Array();
	Array(unsigned int n);
	~Array();
	Array(Array const &);
	Array<T>& operator=(Array const &);
	T& operator[](int i);

	unsigned int size() const;

	class ArrayRangeException : public std::exception {
		public :
			virtual const char* what() const throw() {
				return ("Out of range.");
			}
	};

	T* getArr() const;
};

template <typename T>
Array<T>::Array() {
	this->arr = new T[0];
	this->arrSize = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	this->arr = new T[n];
	this->arrSize = n;
}

template <typename T>
Array<T>::~Array() {
	delete [] this->arr;
}

template <typename T>
Array<T>::Array(Array const &copy) {
	this->arrSize = copy.size();
	this->arr = new T[this->arrSize];
	const T* copyArr = copy.getArr();
	for (unsigned int i = 0; i < this->arrSize; i++) {
		this->arr[i] = copyArr[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(Array const &copy) {
	this->arrSize = copy.size();
	delete [] this->arr;
	this->arr = new T[this->arrSize];
	const T* copyArr = copy.getArr();
	for (unsigned int i = 0; i < this->arrSize; i++) {
		this->arr[i] = copyArr[i];
	}
	return (*this);
}

template <typename T>
T& Array<T>::operator[](int i) {
	if (i < 0 || static_cast<unsigned int>(i) >= this->arrSize)
		throw ArrayRangeException();
	return (this->arr[i]);
}

template <typename T>
unsigned int Array<T>::size() const {
	return (this->arrSize);
}

template <typename T>
T* Array<T>::getArr() const {
	return (this->arr);
}

#endif
