/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 14:21:58 by klee              #+#    #+#             */
/*   Updated: 2018/05/18 14:21:59 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str) : _name(str){
}

void		HumanB::setWeapon(Weapon &gun){
	this->_type = &gun;
}

void		HumanB::attack(){
	std::cout << this->_name << " attacks with his " << this->_type->getType() << std::endl;
}

void		HumanB::setType(std::string str){
	this->_type->setType(str);
}
