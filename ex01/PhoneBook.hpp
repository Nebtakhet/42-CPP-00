/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:12:11 by cesasanc          #+#    #+#             */
/*   Updated: 2024/12/12 14:03:21 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cctype>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int		contact_count;
		bool	is_full;

	public:
		PhoneBook(void);
		~PhoneBook(void);
		
		static std::string	get_input(const std::string &prompt);
		void				add_contact(void);
		void				search_contact(void) const;
};

#endif