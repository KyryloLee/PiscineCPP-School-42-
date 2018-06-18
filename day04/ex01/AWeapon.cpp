/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 14:56:47 by klee              #+#    #+#             */
/*   Updated: 2018/06/04 14:56:48 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void) : _name(""), _apcost(0), _damage(0){
	return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage){
	return ;
}

AWeapon::AWeapon(AWeapon const & obj){
	*this = obj;
}

AWeapon::~AWeapon(){
	return ;
}

AWeapon& AWeapon::operator = (AWeapon const & obj){
	this->_name = obj.getName();
	this->_apcost = obj.getAPCost();
	this->_damage = obj.getDamage();
	return *this;
}

std::string const AWeapon::getName() const{
	return this->_name;
}

int			AWeapon::getAPCost() const{
	return this->_apcost;
}

int			AWeapon::getDamage() const{
	return this->_damage;
}