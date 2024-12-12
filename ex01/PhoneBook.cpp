/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:11:42 by cesasanc          #+#    #+#             */
/*   Updated: 2024/12/12 14:07:15 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/* Function to create a PhoneBook object */
PhoneBook::PhoneBook(void)
{
	this->contact_count = 0;
	this->is_full = false;
	return ;
}

/* Function to destroy a PhoneBook object */
PhoneBook::~PhoneBook(void)
{
	return ;
}

/* Function to get input from the user. It prompts the user with a message and
waits for the user to input a string. If the input is empty, it prompts the user
to enter a valid input */
std::string	PhoneBook::get_input(const std::string &prompt)
{
	std::string input;

	while (true)
	{
		std::cout << prompt + ": ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "\nInput interrupted!" << std::endl;
			exit(0);
		}
		if (input.empty())
		{
			std::cout << "Please enter a valid input." << std::endl;
			continue ;
		}
		return (input);
	}
}

/* Function to add a contact to the PhoneBook. It creates a new Contact object
and sets its information, calling the set_info function from the Contact class.
It then adds the Contact object to the contacts array */
void	PhoneBook::add_contact(void)
{
	Contact new_contact;
	int 	index;
	
	index = this->contact_count % 8;
	new_contact.set_info(index);
	if (this->is_full)
	
		this->contacts[this->contact_count % 8] = new_contact;
	else
	{
		this->contacts[this->contact_count] = new_contact;
		if (this->contact_count == 7)
			this->is_full = true;
	}
	this->contact_count++;
}

/* Function to search for a contact in the PhoneBook. It prints the relevant
information of the contacts in the PhoneBook and prompts the user to enter the
index of the contact they want to display. If the input is invalid, it prompts
the user to enter a valid input */
void PhoneBook::search_contact(void) const
{
    int max_contacts = is_full ? 8 : contact_count;
    std::string index_str;
    int index;

    std::cout << "***** Relevant PhoneBook Entries *****" << std::endl;
    std::cout << "|   Index  |First Name|Last  Name| Nickname |" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    for (int i = 0; i < max_contacts; i++)
        contacts[i].show_contact();

    std::cout << "Enter the index of the contact you want to display: ";
    std::getline(std::cin, index_str);
	
	try
	{
		index = std::stoi(index_str) - 1;
		if (index < 0 || index >= max_contacts)
		{
			std::cout << "Invalid index. Please try again." << std::endl;
			return;
		}
	}
	
	catch (const std::invalid_argument&)
	{
		std::cout << "Invalid input. Please try again." << std::endl;
		return ;
	}
	
	catch (const std::out_of_range&)
	{
		std::cout << "Number too large. Please try again." << std::endl;
		return ;
	}
    contacts[index].get_info();
}
