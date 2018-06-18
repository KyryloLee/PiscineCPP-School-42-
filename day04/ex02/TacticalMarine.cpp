/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:08:09 by klee              #+#    #+#             */
/*   Updated: 2018/06/06 12:08:10 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() : _name("Tactical Marine"){
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & obj){
	*this = obj;
}

TacticalMarine::~TacticalMarine(){
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine& TacticalMarine::operator= (TacticalMarine const & obj){
	this->_name = obj.getName();
	return *this;
}

std::string const TacticalMarine::getName() const{
	return this->_name;
}

ISpaceMarine* TacticalMarine::clone() const{
	ISpaceMarine* newUnit;

	newUnit = new TacticalMarine;
	return newUnit;
}

void	TacticalMarine::battleCry() const{
	std::cout << "For the holy PLOT !" << std::endl;
}

void	TacticalMarine::rangedAttack() const{
	std::cout << "* attacks with bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack() const{
	std::cout << "* attacks with chainsword *" << std::endl;
}
