/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 14:21:32 by klee              #+#    #+#             */
/*   Updated: 2018/05/18 14:21:33 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : _name(name), _type(type){
}

void		HumanA::attack(){
	std::cout << this->_name << " attacks with his " << this->_type.getType() << std::endl;
}

void		HumanA::setType(std::string str){
	this->_type.setType(str);
}