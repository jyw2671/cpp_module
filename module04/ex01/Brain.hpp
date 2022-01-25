/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:17:30 by yjung             #+#    #+#             */
/*   Updated: 2022/01/25 19:17:32 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(BRAIN_HPP)
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(Brain const &c);
		~Brain();
		Brain &operator=(Brain const &c);

		std::string const &getIdea(int index) const;
};

#endif
