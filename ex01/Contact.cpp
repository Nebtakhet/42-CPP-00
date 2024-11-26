/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:13:30 by cesasanc          #+#    #+#             */
/*   Updated: 2024/11/26 19:19:20 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

/* Function to create a Contact object */
Contact::Contact(void)
{
	return ;
}

/* Function to destroy a Contact object */
Contact::~Contact(void)
{
	return ;
}

/* Function to set the information of a Contact object. It calls the get_input
function from the PhoneBook class to get the information from the user */
void	Contact::set_info(int index)
{
	this->index = index;
	std::cout << std::endl << "Adding contact number #" << index + 1 << std::endl;
	this->first_name = PhoneBook::get_input("First name");
	this->last_name = PhoneBook::get_input("Last name");
	this->nickname = PhoneBook::get_input("Nickname");
	this->phone_number = PhoneBook::get_input("Phone number");
	this->darkest_secret = PhoneBook::get_input("Darkest secret");
	std::cout << std::endl << "Contact added successfully!" << std::endl << std::endl;
}

/* Function to truncate a string to 10 characters. If the string is longer than
10 characters, it truncates it and adds a '.' at the end */
std::string Contact::truncate(const std::string &str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

/* Function to show the information of a Contact object. It truncates the strings
to 10 characters */
void	Contact::show_contact(void) const
{
	std::cout << "|" << std::setw(10) << this->index + 1 << "|";
	std::cout << std::setw(10) << truncate(this->first_name) << "|";
	std::cout << std::setw(10) << truncate(this->last_name) << "|";
	std::cout << std::setw(10) << truncate(this->nickname) << "|" << std::endl;
}


/* Function to get the information of a Contact object. It prints the information
of the Contact object as it was inputed by the user */
void	Contact::get_info(void) const
{
	std::cout << std::endl << "Contact information:" << std::endl;
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
	std::cout << std::endl;
}
