/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 14:19:15 by klee              #+#    #+#             */
/*   Updated: 2018/05/16 14:19:17 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	return ;
}

Zombie::~Zombie(){
	return ;
}

void		Zombie::announce(void){
	std::cout << "<" << this->_name << " (" << this->_type << ")> ";
	std::cout << "BRAIIINS......" << std::endl;
}

void		Zombie::setName(std::string str){
	this->_name = str;
}

void		Zombie::setType(std::string str){
	this->_type = str;
}