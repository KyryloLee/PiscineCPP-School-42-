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
	this->_fixed = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & obj){
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

void 	Fixed::operator = (Fixed const & obj){
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed = obj.getRawBits();
}

int		Fixed::getRawBits(void) const{
	std::cout << "getRawBits called" << std::endl;
	return this->_fixed;
}

void	Fixed::setRawBits(int const raw){
	this->_fixed = raw;
}
