/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 12:51:05 by klee              #+#    #+#             */
/*   Updated: 2018/06/05 12:51:08 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name), _ap(40), _weapon(NULL){
	return ;
}

Character::Character(Character const & obj){
	*this = obj;
}

Character::~Character(){
	return ;
}

Character& Character::operator = (Character const & obj){
	this->_name = obj.getName();
	this->_ap = obj.getAP();
	this->_weapon = obj.getWeapon();
	return *this;
}

std::string	const	Character::getName() const{
	return this->_name;
}

int				Character::getAP() const{
	return this->_ap;
}

AWeapon*		Character::getWeapon() const{
	return this->_weapon;
}

void			Character::recoverAP(){
	if (this->_ap + 10 <= 40)
		this->_ap +=10;
	else
		this->_ap = 40;
}

void			Character::equip(AWeapon* const & obj){
	this->_weapon = obj;
}

void			Character::attack(Enemy* & obj){
	
	if (obj == NULL)
		return ;
	if (this->_ap >= this->_weapon->getAPCost()){
		obj->TakeDamage(this->_weapon->getDamage());
		this->_ap -= this->_weapon->getAPCost();
		std::cout << this->_name <<" attacks " << obj->getType() << " with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		if (obj->getHP() <= 0){
			delete obj;
			obj = NULL;
		}
	}
	else
		std::cout << "*need more action points*" << std::endl;
}

std::ostream& operator << (std::ostream &stream, Character const & obj){
	if (obj.getWeapon() != NULL)
		stream << obj.getName() << " has " << obj.getAP() << " AP and wields a " << (obj.getWeapon())->getName() << std::endl;
	else
		stream << obj.getName() << " has " << obj.getAP() << " AP and is unarmed" << std::endl;
	return stream;
}
