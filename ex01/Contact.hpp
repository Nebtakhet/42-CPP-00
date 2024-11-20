/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:13:39 by cesasanc          #+#    #+#             */
/*   Updated: 2024/11/20 14:59:49 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class PhoneBook;

class Contact
{
	private:
		int			index;
		std::string	first_name;
		std::string	last_name;
		std::string	phone_number;
		std::string	nickname;
		std::string	darkest_secret;
	
		std::string truncate(const std::string &str) const;

	public:
		Contact(void);
		~Contact(void);
		
		void	set_info(int index);
		void 	show_contact(void) const;
		void 	get_info(void) const;
};

#endif