/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 17:45:19 by klee              #+#    #+#             */
/*   Updated: 2018/05/25 17:45:21 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(){
	return ;
}

NinjaTrap::NinjaTrap(std::string name){
	this->_Name = name;
	this->_HitPoint = 60;
	this->_MaxHitPoint = 60;
	this->_EnergyPoint = 120;
	this->_MaxEnergyPoint = 120;
	this->_Level = 1;
	this->_MeleeAttackDamage = 60;
	this->_RangedAttackDamage = 5;
	this->_ArmorDamageReduction = 0;
	this->_KickOnBallsDamage = 11;
	this->_PunchOnAssDamage = 13;
	this->_FingersInEyesDamage = 9;
	std::cout << "Shadow it`s my second name." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &obj) : ClapTrap(obj){
	*this = obj;
	std::cout << "Dublicated" << std::endl;
}

NinjaTrap::~NinjaTrap(){
	std::cout << "Ninja never die!" << std::endl;
}

NinjaTrap& NinjaTrap::operator = (NinjaTrap const &obj){
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
	return *this;
}

void		NinjaTrap::ninjaShoebox(FragTrap &obj){
	obj.vaulthunter_dot_exe("You");
}

void		NinjaTrap::ninjaShoebox(ScavTrap &obj){
	obj.challengeNewcomer();
}

void		NinjaTrap::ninjaShoebox(ClapTrap &obj){
	obj.getKickOnBalls("You!");
}

void		NinjaTrap::ninjaShoebox(NinjaTrap &obj){
	std::cout << "Fuuuuu, again ninja?!" << std::endl;
}
