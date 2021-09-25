/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:02:19 by yjung             #+#    #+#             */
/*   Updated: 2021/09/25 14:43:02 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for(i = 1; i < argc; i++)
		{
			for(j = 0; argv[i][j]; j++)
				argv[i][j] = toupper(argv[i][j]);
			std::cout << argv[i];
		}
	}
	std::cout << std::endl;
	return (0);
}
