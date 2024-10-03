/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:13:23 by cesasanc          #+#    #+#             */
/*   Updated: 2024/10/03 16:05:28 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/* Main function that prints the given strings. If no strings are given, then
it prints a custom message */
int	main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j]; j++)
				argv[i][j] = (char)toupper(argv[i][j]);
			std::cout << argv[i];
			if (argv[i])
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
