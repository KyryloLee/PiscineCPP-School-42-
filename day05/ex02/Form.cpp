/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 09:29:52 by klee              #+#    #+#             */
/*   Updated: 2018/06/19 09:29:53 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSigned, int gradeToExecute) : _name(name), _gradeToSigned(gradeToSigned), _gradeToExecute(gradeToExecute){
	this->_signed = false;
	if (this->_gradeToExecute < 1 || this->_gradeToSigned < 1)
		throw Form::GradeTooHighExeption();
	else if (this->_gradeToExecute > 150 || this->_gradeToSigned > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & obj) : _name(obj.getName()), _gradeToSigned(obj.getGradeToSigned()), _gradeToExecute(obj.getGradeToExecute()){
	*this = obj;
}

Form::~Form(){

}

Form& Form::operator= (Form const & obj){
	this->_signed = obj.getSigned();
	return *this;
}

const char * Form::GradeTooHighExeption::what() const throw(){
	return "Grade Too High Exeption";
}

const char * Form::GradeTooLowException::what() const throw(){
	return "Grade Too Low Exception";
}

const std::string		Form::getName() const{
	return this->_name;
}

int				Form::getGradeToExecute() const{
	return this->_gradeToExecute;
}

int				Form::getGradeToSigned() const{
	return this->_gradeToSigned;
}

bool					Form::getSigned() const{
	return this->_signed;
}

void					Form::beSigned(Bureaucrat * obj){
	if (obj->getGrade() < this->getGradeToSigned()){
		this->_signed = true;
	}
	else{
		throw Form::GradeTooLowException();
	}
}

std::ostream &			operator<< (std::ostream & stream, Form const & obj){
	stream << obj.getName() << " are " << (obj.getSigned() == true ? " " : " not ") << "signed";
	return stream;
}
