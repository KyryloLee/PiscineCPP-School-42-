/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 11:22:15 by klee              #+#    #+#             */
/*   Updated: 2018/06/05 11:22:16 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() : _hp(0), _type(""){
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type){
}

Enemy::Enemy(Enemy const & obj){
	*this = obj;
}

Enemy::~Enemy(){
}

Enemy& Enemy::operator= (Enemy const & obj){
	this->_hp = obj.getHP();
	this->_type = obj.getType();
	return *this;
}

void	Enemy::TakeDamage(int damage){
	if (damage > 0){
		if (this->_hp - damage >= 0)
			this->_hp -= damage;
		else
			this->_hp = 0;
	}
}

std::string const Enemy::getType() const{
	return this->_type;
}

int			Enemy::getHP() const{
	return this->_hp;
}
