/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:13:39 by cesasanc          #+#    #+#             */
/*   Updated: 2024/10/03 16:03:50 by cesasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		
	
	private:
		bool		is_full;
		std::string	first_name;
		std::string	last_name;
		std::string	phone_number;
		std::string	nickname;
		std::string	darkest_secret;
		
}

#endif