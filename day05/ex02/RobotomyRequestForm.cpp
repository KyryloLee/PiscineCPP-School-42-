/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 14:42:43 by klee              #+#    #+#             */
/*   Updated: 2018/06/19 14:42:44 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("ShrubberyCreationForm", SIGN, EXEC){
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & obj) : Form(obj){
	*this = obj;
}

RobotomyRequestForm::~RobotomyRequestForm(){

}

RobotomyRequestForm& RobotomyRequestForm::operator= (RobotomyRequestForm const & obj){
	this->_target = obj.getTarget();
}

std::string			RobotomyRequestForm::getTarget(){
	return this->_target;
}

void				RobotomyRequestForm::createAFile(){
	
}
