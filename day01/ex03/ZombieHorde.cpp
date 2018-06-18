/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 10:36:38 by klee              #+#    #+#             */
/*   Updated: 2018/05/17 10:36:39 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int i){
	std::cout << "make hord" << std::endl;
	this->_horde = new Zombie[i];
	for(int c = 0; c < i; c++){
		this->_horde[c].setName("Oleg");
		this->_horde[c].setType("Konsulytant");
		this->_horde[c].announce();
	}
}

ZombieHorde::~ZombieHorde(){
	std::cout << "delete hord" << std::endl;
	delete[] this->_horde;
}
