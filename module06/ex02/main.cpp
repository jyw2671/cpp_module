/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:53:40 by yjung             #+#    #+#             */
/*   Updated: 2022/02/05 13:51:12 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main()
{
	srand(time(NULL));
	for (int i = 0 ; i < 3 ; ++i)
	{
		Base* base = generate();
		identify(base);
		identify(*base);
		std::cout << std::endl;
		delete base;
	}
	// system("leaks ex02");
	return (0);
}
