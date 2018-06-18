/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 11:50:27 by klee              #+#    #+#             */
/*   Updated: 2018/05/16 11:50:29 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(){
	std::cout << "😲 Wow, new pony" << std::endl;
}

Pony::~Pony(){
	std::cout << "😢 I guess, pony is dead" << std::endl;
}

void		Pony::showInfo(void){
	std::cout << std::setw(8) << "Name:" << " " << this->name << std::endl;
	std::cout << std::setw(8) << "Color:" << " " << this->color << std::endl;
	std::cout << std::setw(8) << "Gender:" << " " << this->gender << std::endl;
}

void		Pony::setName(std::string str){
	this->name = str;
}

void		Pony::setColor(std::string str){
	this->color = str;
}

void		Pony::setGender(std::string str){
	this->gender = str;
}
