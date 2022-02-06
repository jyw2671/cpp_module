/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:43:42 by yjung             #+#    #+#             */
/*   Updated: 2022/02/06 17:43:43 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>

class Span
{
private:
	std::vector<int> vec;
	Span() {}

public:
	Span(unsigned int n);
	~Span();
	Span(Span const &);
	Span& operator=(Span const &);

	void addNumber(int);
	void addNumber(std::vector<int>::iterator const &, std::vector<int>::iterator const &);

	int shortestSpan();
	int longestSpan();

	std::vector<int> getVector() const;
};

#endif
