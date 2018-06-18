/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 11:05:44 by klee              #+#    #+#             */
/*   Updated: 2018/06/05 11:05:46 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Powe Fist", 8, 50){
    return ;
}

PowerFist::PowerFist(PowerFist const & obj){
	*this = obj;
}

PowerFist::~PowerFist(){
    return ;
}

PowerFist& PowerFist::operator= (PowerFist const & obj){
    this->_name = obj.getName();
    this->_apcost = obj.getAPCost();
    this->_damage = obj.getDamage();
    return *this;
}

void        PowerFist::attack() const{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
