/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 14:05:40 by klee              #+#    #+#             */
/*   Updated: 2018/06/18 14:05:41 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade){
	this->_name = name;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();	
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & obj){
	*this = obj;
}

Bureaucrat& Bureaucrat::operator= (Bureaucrat const & obj){
	this->_name = obj.getName();
	this->_grade = obj.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat(){

}

std::string			Bureaucrat::getName() const{
	return this->_name;
}

int					Bureaucrat::getGrade() const{
	return this->_grade;
}

std::ostream& operator<< (std::ostream& stream, Bureaucrat const &obj){
	stream << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return stream;
}

void				Bureaucrat::increment(){
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}

void				Bureaucrat::decrement(){
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "0 < grade";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "grade < 151";
}
