/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:51:09 by klee              #+#    #+#             */
/*   Updated: 2018/06/06 12:51:10 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() : _name("Assault Terminator"){
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & obj){
	*this = obj;
}

AssaultTerminator::~AssaultTerminator(){
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator& AssaultTerminator::operator= (AssaultTerminator const & obj){
	this->_name = obj.getName();
	return *this;
}

std::string AssaultTerminator::getName() const{
	return this->_name;
}

ISpaceMarine* AssaultTerminator::clone() const{
	ISpaceMarine* newUnit;

	newUnit = new AssaultTerminator;
	return newUnit;
}

void	AssaultTerminator::battleCry() const{
	std::cout << "This code is unclean. PURIFY IT !”" << std::endl;
}

void	AssaultTerminator::rangedAttack() const{
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack() const{
	std::cout << "* attacks with chainfists *" << std::endl;
}

