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
	this->_fixedValue = 0;
	return ;
}

Fixed::~Fixed(){
	return ;
}

Fixed::Fixed(Fixed const &obj){
	*this = obj;
	return ;
}

Fixed::Fixed(int number) : _fixedValue(number){
	this->_fixedValue = number * (1 << 8);
	return ;
}

Fixed::Fixed(float number){
	this->_fixedValue = roundf(number * (1 << 8));
	return ;
}

Fixed& 	Fixed::operator = (Fixed const & obj){
	if (&obj == this)
		return *this;
	this->_fixedValue = obj.getRawBits();
	return *this;
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

const bool Fixed::operator < (Fixed const & obj) const{
	return this->getRawBits() < obj.getRawBits();
}

const bool Fixed::operator <= (Fixed const & obj) const{
	return this->getRawBits() <= obj.getRawBits();
}

const bool Fixed::operator > (Fixed const & obj) const{
	return this->getRawBits() > obj.getRawBits();
}

const bool Fixed::operator >= (Fixed const & obj) const{
	return this->getRawBits() >= obj.getRawBits();
}

const bool Fixed::operator == (Fixed const & obj) const{
	return this->getRawBits() == obj.getRawBits();
}

const bool Fixed::operator != (Fixed const & obj) const{
	return !(this->getRawBits() == obj.getRawBits());
}

Fixed Fixed::operator + (Fixed const & obj) const{
	return Fixed(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator - (Fixed const & obj) const{
	return Fixed(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator * (Fixed const &obj) const{
	return Fixed(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator / (Fixed const &obj) const{
	return Fixed(this->toFloat() * obj.toFloat());
} 

Fixed Fixed::operator ++ (int){
	Fixed	obj;

	obj = *this;
	this->_fixedValue++;
	return obj;
}

Fixed& Fixed::operator ++ (){
	this->_fixedValue++;
	return *this;
}

Fixed Fixed::operator -- (int){
	Fixed	obj;

	obj = *this;
	this->_fixedValue--;
	return obj;
}

Fixed& Fixed::operator -- (){
	this->_fixedValue--;
	return *this;
}

const Fixed& min(Fixed const &obj1, Fixed const &obj2){
	if (obj1 < obj2)
		return obj1;
	return obj2;
}

const Fixed& Fixed::max(Fixed const &obj1, Fixed const &obj2){
	if (obj1 > obj2)
		return obj1;
	return obj2;
}
