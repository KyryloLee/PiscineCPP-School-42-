/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 12:50:22 by klee              #+#    #+#             */
/*   Updated: 2018/05/14 13:35:57 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact{

public:

	Contact(void);
	~Contact(void);
	
	void			setInfo(void);
	void			getInfo(int index);
	int				empty(void);
	void			showInfo(void);

private:
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		login;
	std::string		postal_address;
	std::string		phone_number;
	std::string		birthday;
	std::string		favorite_meal;
	std::string		underwear_color;
	std::string		darkest_secret;
};

#endif
