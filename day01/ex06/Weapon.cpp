/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 14:21:04 by klee              #+#    #+#             */
/*   Updated: 2018/05/18 14:21:05 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(std::string str) : _type(str){
}

std::string		Weapon::getType(){
	return (this->_type);
}

void				Weapon::setType(std::string str){
	this->_type = str;
}