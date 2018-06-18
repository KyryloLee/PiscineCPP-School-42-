/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:34:54 by klee              #+#    #+#             */
/*   Updated: 2018/05/30 13:34:55 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(){
	return ;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title){
    std::cout << this->_name << "the " << this->_title << " is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & obj){
    *this = obj;
}

Sorcerer::~Sorcerer(){
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer& Sorcerer::operator = (Sorcerer const &obj){
    this->_name = obj.getName();
    this->_title = obj.getTitle();
    return *this;
}

std::string         Sorcerer::getName() const{
    return this->_name;
}

std::string          Sorcerer::getTitle() const{
    return this->_title;
}

std::ostream& operator << (std::ostream& stream, Sorcerer const & obj){
    stream << "I am "<< obj.getName() << ", " << obj.getTitle() << ", and I likes ponies!" << std::endl;
    return stream;
}

void		Sorcerer::polymorph(Victim const & obj) const{
	obj.getPolymorphed();
}