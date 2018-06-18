/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 11:45:13 by klee              #+#    #+#             */
/*   Updated: 2018/05/17 11:45:14 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const Brain*		Human::identify() const{
	return this->_Brain.identify();
}

const Brain&			Human::getBrain() {
	return this->_Brain ;
}
