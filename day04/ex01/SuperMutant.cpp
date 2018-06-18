/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 11:41:36 by klee              #+#    #+#             */
/*   Updated: 2018/06/05 11:41:37 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant"){
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::SuperMutant(SuperMutant const & obj){
	*this = obj;
}

SuperMutant::~SuperMutant(){
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

SuperMutant& SuperMutant::operator = (SuperMutant const & obj){
	this->_type = obj.getType();
	this->_hp = obj.getHP();
	return *this;
}

void	SuperMutant::TakeDamage(int damage){
	Enemy::TakeDamage(damage - 3);
	return ;
}
