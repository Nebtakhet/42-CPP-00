/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:29:18 by cesasanc          #+#    #+#             */
/*   Updated: 2024/11/20 14:10:31 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	std::cout << "Welcome to the Relevant PhoneBook!" << std::endl;
	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(1);
		if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (command == "EXIT")
		{
			std::cout << "Goodbye! Have a good day!" << std::endl;
			break ;
		}
		else
			std::cout << "Invalid command. Please try again." << std::endl;
	}
	return (0);
}
