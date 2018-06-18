/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 14:19:54 by klee              #+#    #+#             */
/*   Updated: 2018/05/16 14:19:56 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(){
	return ;
}

ZombieEvent::~ZombieEvent(){
	return ;
}

void		ZombieEvent::setZombieType(std::string str){
	this->_type = str;
}

Zombie*		ZombieEvent::newZombie(std::string name){
	Zombie*		unit;

	unit = new Zombie();
	unit->setType(this->_type);
	unit->setName(name);
	return (unit);
}

Zombie*		ZombieEvent::randomChump(){
	Zombie*			unit;
	std::string		arr[5] = {"Ernesto", "Hulio", "Pablo", "Hose", "Mario"};
	int				numb;

	srand (time(NULL));
	numb = rand() % 5;
	unit = new Zombie();
	unit->setName(arr[numb]);
	unit->setType(this->_type);
	return (unit);
}