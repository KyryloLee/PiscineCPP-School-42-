/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:12:18 by klee              #+#    #+#             */
/*   Updated: 2018/05/24 13:12:20 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void){
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name), _vaulthunterDamage(25){
	this->_Name = name;
	this->_HitPoint = 100;
	this->_MaxHitPoint = 100;
	this->_EnergyPoint = 100;
	this->_MaxEnergyPoint = 100;
	this->_Level = 1;
	this->_MeleeAttackDamage = 30;
	this->_RangedAttackDamage = 20;
	this->_ArmorDamageReduction = 5;
	this->_KickOnBallsDamage = 11;
	this->_PunchOnAssDamage = 13;
	this->_FingersInEyesDamage = 9;
	this->_vaulthunterDamage = 25;
	std::cout << "Directive one: Protect humanity! Directive two: Obey klee at all costs. Directive three: Dance" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj){
	*this = obj;
	std::cout << "I`m look like him!" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

FragTrap& FragTrap::operator = (FragTrap const &obj){
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

void			FragTrap::vaulthunter_dot_exe(std::string const & target){
	if (this->_EnergyPoint > this->_vaulthunterDamage){
		typedef void (ClapTrap::*method_function_t)(std::string const & str);
		method_function_t 	array[5];
		int					numb;

		this->_EnergyPoint -= this->_vaulthunterDamage;
		array[0] = &ClapTrap::getMeleeAttackDamage;
		array[1] = &ClapTrap::getRangedAttackDamage;
		array[2] = &ClapTrap::getKickOnBalls;
		array[3] = &ClapTrap::getPunchOnAss;
		array[4] = &ClapTrap::getFingersInEyes;
		srand (time(NULL));
		numb = rand() % 5;
		method_function_t mthd = array[numb];
		if (array[numb])
			(this->*mthd)(target);
	}
	else
		std::cout << "I need more energy" << std::endl;
}

unsigned int			FragTrap::getvaulthunterValue() const{
	return this->_vaulthunterDamage;
}
