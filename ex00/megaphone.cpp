/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:13:23 by cesasanc          #+#    #+#             */
/*   Updated: 2024/12/13 15:35:38 by cesasanc         ###   ########.fr       */
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
		bool printed = false;
		for (int i = 1; i < argc; i++)
		{
			std::string str = argv[i];
			if (str.empty())
				continue ;
			for (size_t j = 0; j < str.length(); j++)
				str[j] = toupper(str[j]);
			std::cout << str;
			printed = true;
		}
		if (!printed)
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << std::endl;
	}
	return (0);
}
