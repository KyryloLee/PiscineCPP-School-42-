/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 13:42:43 by klee              #+#    #+#             */
/*   Updated: 2018/05/25 13:42:44 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name){
	this->_Name = name;
	this->_HitPoint = 100;
	this->_MaxHitPoint = 100;
	this->_EnergyPoint = 50;
	this->_MaxEnergyPoint = 50;
	this->_Level = 1;
	this->_MeleeAttackDamage = 20;
	this->_RangedAttackDamage = 15;
	this->_ArmorDamageReduction = 3;
	this->_KickOnBallsDamage = 11;
	this->_PunchOnAssDamage = 13;
	this->_FingersInEyesDamage = 9;
	std::cout << "I`m not a FR4G-TP, I am individuality" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj) : ClapTrap(obj){
	*this = obj;
	std::cout << "I`m look like him!" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "Hmmm, am I dead?" << std::endl;
}

ScavTrap& ScavTrap::operator = (ScavTrap const &obj){
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

void			ScavTrap::challengeNewcomer(){
	typedef void (ScavTrap::*method_function_t)();
	method_function_t 	array[3];
	int					numb;

	array[0] = &ScavTrap::challengeMilk;
	array[1] = &ScavTrap::challengeTree;
	array[2] = &ScavTrap::challengeMother;
	srand (time(NULL));
	numb = rand() % 3;
	method_function_t mthd = array[numb];
	if (array[numb])
		(this->*mthd)();
}

void			ScavTrap::challengeMilk(){
	std::cout << "Make sound like cow!" << std::endl << std::endl;
}

void			ScavTrap::challengeTree(){
	std::cout << "Climb on the tree!" << std::endl << std::endl;
}

void			ScavTrap::challengeMother(){
	std::cout << "Tell fanny joke about your mother!" << std::endl << std::endl;
}
