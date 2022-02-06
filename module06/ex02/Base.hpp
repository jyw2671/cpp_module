/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 10:19:38 by yjung             #+#    #+#             */
/*   Updated: 2022/02/06 10:19:40 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <exception>
# include <iostream>
# include <string>

class Base {
	private:
	public:
		virtual ~Base(){};
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
