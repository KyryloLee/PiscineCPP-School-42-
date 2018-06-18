/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 13:45:41 by klee              #+#    #+#             */
/*   Updated: 2018/05/15 13:45:42 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void){
}

Contact::~Contact(void){
}

void		Contact::setInfo(void){
	std::cout << "First name:" << std::endl;
	getline(std::cin, this->first_name);
	std::cout << "Last name:" << std::endl;
	getline(std::cin, this->last_name);
	std::cout << "Nickname:" << std::endl;
	getline(std::cin, this->nickname);
	std::cout << "Login:" << std::endl;
	getline(std::cin, this->login);
	std::cout << "Postal address:" << std::endl;
	getline(std::cin, this->postal_address);
	std::cout << "Phone number:" << std::endl;
	getline(std::cin, this->phone_number);
	std::cout << "Birthday date:" << std::endl;
	getline(std::cin, this->birthday);
	std::cout << "Favorite meal:" << std::endl;
	getline(std::cin, this->favorite_meal);
	std::cout << "Underwear color" << std::endl;
	getline(std::cin, this->underwear_color);
	std::cout << "Darkest secret" << std::endl;
	getline(std::cin, this->darkest_secret);
}

void		Contact::showInfo(void){
	std::cout << std::setw(17) << "First name: " << this->first_name << std::endl;
	std::cout << std::setw(17) << "Last name: " << this->last_name << std::endl;
	std::cout << std::setw(17) << "Nickname: " << this->nickname << std::endl;
	std::cout << std::setw(17) << "Login: " << this->login << std::endl;
	std::cout << std::setw(17) << "Postal address: " << this->postal_address << std::endl;
	std::cout << std::setw(17) << "Phone number: " << this->phone_number << std::endl;
	std::cout << std::setw(17) << "Birthday date: " << this->birthday << std::endl;
	std::cout << std::setw(17) << "Favorite meal: " << this->favorite_meal << std::endl;
	std::cout << std::setw(17) << "Underwear color: " << this->underwear_color << std::endl;
	std::cout << std::setw(17) << "Darkest secret: " << this->darkest_secret << std::endl;
}

int			Contact::empty(void){
	if (first_name.empty() || last_name.empty() || nickname.empty())
		return (-1);
	return (0);
}

void		Contact::getInfo(int index){
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;

	first_name = this->first_name;
	last_name = this->last_name;
	nickname = this->nickname;
	if (this->first_name.length() > 10){
		first_name.resize(9);
		first_name.insert(9, 1, '.');
	}
	if (this->last_name.length() > 10){
		last_name.resize(9);
		last_name.insert(9, 1,'.' );
	}
	if (this->nickname.length() > 10){
		nickname.resize(9);
		nickname.insert(9, 1, '.');
	}
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << first_name << "|";
	std::cout << std::setw(10) << last_name << "|";
	std::cout << std::setw(10) << nickname << "|";
	std::cout << std::endl;
}
