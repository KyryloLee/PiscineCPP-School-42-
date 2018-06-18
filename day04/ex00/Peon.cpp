/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:37:52 by klee              #+#    #+#             */
/*   Updated: 2018/05/30 13:37:55 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name){
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & obj) : Victim(obj){

}

Peon::~Peon(){
	std::cout << "Bleuark..." << std::endl;
}

Peon& Peon::operator = (Peon const & obj){
	this->_name = obj.getName();
    this->_title = obj.getTitle();
	return *this;
}

void		Peon::getPolymorphed() const{
	std::cout << this->_name <<" has been turned into a pink pony !" << std::endl;
}