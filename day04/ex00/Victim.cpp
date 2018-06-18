/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:37:21 by klee              #+#    #+#             */
/*   Updated: 2018/05/30 13:37:24 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name){
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::Victim(Victim const & obj){
	*this = obj;
}

Victim::~Victim(){
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

Victim& Victim::operator = (Victim const &obj){
    this->_name = obj.getName();
    this->_title = obj.getTitle();
    return *this;
}

std::string         Victim::getName() const{
    return this->_name;
}

std::string          Victim::getTitle() const{
    return this->_title;
}

void		Victim::getPolymorphed() const{
	std::cout << this->_name <<" has been turned into a cute little sheep !" << std::endl;
}

std::ostream& operator << (std::ostream& stream, Victim const & obj){
	 stream << "I'm " << obj.getName() << " and I like otters !" << std::endl;
    return stream;
}
