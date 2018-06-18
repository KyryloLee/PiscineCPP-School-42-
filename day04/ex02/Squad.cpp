/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 11:03:20 by klee              #+#    #+#             */
/*   Updated: 2018/06/06 11:03:21 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _name("Squad"){
	this->_squad_vector = nullptr;
}

Squad::Squad(Squad const & obj){
	*this = obj;
}

Squad::~Squad(){
	t_list* del_obj = nullptr;
	t_list* tmp = this->_squad_vector;

	while (tmp->next != nullptr){
		del_obj = tmp;
		tmp = tmp->next;
		delete del_obj->obj;
		delete del_obj;
	}
	delete tmp;
	this->_squad_vector = nullptr;
}

Squad& Squad::operator= (Squad const & obj){
	this->_name = obj.getName();
	return *this;
}

int Squad::getCount() const{
	int i = 0;

	t_list* tmp = this->_squad_vector;
	while (tmp != nullptr){
			tmp = tmp->next;
			i++;
	}
	return i;
}

ISpaceMarine* Squad::getUnit(int n) const{
	t_list*	tmp;
	int i = 0;

	tmp = this->_squad_vector;
	while (tmp != nullptr){
		tmp = tmp->next;
		i++;
	}
	if (n >= 0 && n <= i - 1){
		tmp = this->_squad_vector;
		while (i < n)
			tmp = tmp->next;
		return tmp->obj;
	}
	return nullptr;
}

int	Squad::push(ISpaceMarine* const & obj){
	t_list *tmp;
	int i = 0;

	if (this->_squad_vector == nullptr){
		this->_squad_vector = new t_list;
		this->_squad_vector->obj = obj;
		this->_squad_vector->next = nullptr;
		return 1;
	}
	tmp = this->_squad_vector;
	while (tmp->next != nullptr){
		tmp = tmp->next;
		i++;
	}
	t_list* plus = new t_list;
	plus->obj = obj;
	plus->next = nullptr;
	tmp->next = plus;
	
	i++;
	return i;
}

std::string Squad::getName() const{
	return this->_name;
}
