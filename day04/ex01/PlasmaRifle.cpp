/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 15:39:42 by klee              #+#    #+#             */
/*   Updated: 2018/06/04 15:39:44 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("PlasmaRifle", 5, 21){
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & obj) : AWeapon(obj){
	*this = obj;
}

PlasmaRifle::~PlasmaRifle(){
	return ;
}

PlasmaRifle& PlasmaRifle::operator = (PlasmaRifle const & obj){
	this->_name = obj.getName();
	this->_apcost = obj.getAPCost();
	this->_damage = obj.getDamage();
	return *this;
}

void	PlasmaRifle::attack() const{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
