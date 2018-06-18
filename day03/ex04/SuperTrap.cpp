/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:21:10 by klee              #+#    #+#             */
/*   Updated: 2018/05/30 10:21:17 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : NinjaTrap(name), FragTrap(name){
    this->_Name = name;
	this->_HitPoint = 100;
	this->_MaxHitPoint = 100;
	this->_EnergyPoint = 120;
	this->_MaxEnergyPoint = 120;
	this->_Level = 1;
	this->_MeleeAttackDamage = 60;
	this->_RangedAttackDamage = 20;
	this->_ArmorDamageReduction = 5;
	this->_KickOnBallsDamage = 11;
	this->_PunchOnAssDamage = 13;
	this->_FingersInEyesDamage = 9;
	this->_vaulthunterDamage = 25;
    std::cout << "I`m just super!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & obj){
    *this = obj;
    std::cout << "Cloned" << std::endl;
}

SuperTrap::~SuperTrap(){
    std::cout << "Oh, death.." << std::endl;
}

SuperTrap& SuperTrap::operator = (SuperTrap const &obj){
	this->_Name = obj.getName();
	this->_HitPoint = obj.getHitPoint();
	this->_MaxHitPoint = obj.getMaxHitPoint();
	this->_EnergyPoint = obj.getEnergyPoint();
	this->_MaxEnergyPoint = obj.getMaxEnergyPoint();
	this->_Level = obj.getLevel();
	this->_MeleeAttackDamage = obj.getMAttackDamage();
	this->_RangedAttackDamage = obj.getRAttackDamage();
	this->_ArmorDamageReduction = obj.getArmorDamageReduction();
	this->_KickOnBallsDamage = obj.getKickOnBallsValue();
	this->_PunchOnAssDamage = obj.getPunchOnAssValue();
	this->_FingersInEyesDamage = obj.getFingersInEyesvalue();
	this->_vaulthunterDamage = obj.getvaulthunterValue();
	return *this;
}
