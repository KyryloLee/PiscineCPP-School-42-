/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:27:36 by klee              #+#    #+#             */
/*   Updated: 2018/05/22 14:27:37 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_fixedValue = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & obj){
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(int number) : _fixedValue(number){
	std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = number * (1 << 8);
}

Fixed::Fixed(float number){
	std::cout << "Float constructor called" << std::endl;
	this->_fixedValue = roundf(number * (1 << 8));
}

void 	Fixed::operator = (Fixed const & obj){
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedValue = obj.getRawBits();
}

int		Fixed::getRawBits(void) const{
	return this->_fixedValue;
}

void	Fixed::setRawBits(int const raw){
	this->_fixedValue = raw;
}

int		Fixed::toInt() const{
	return ((int)this->_fixedValue / (1 << 8));
}

float	Fixed::toFloat(void) const{
	return ((float)this->_fixedValue / 256);
}

std::ostream&	operator << (std::ostream& stream, Fixed const & obj){
	stream << obj.toFloat();
	return stream;
}
