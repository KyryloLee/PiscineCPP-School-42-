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

FragTrap::FragTrap(std::string name) : _Name(name), _Level(1), _HitPoint(100), _MaxHitPoint(100),
_MaxEnergyPoint(100), _EnergyPoint(100), _MeleeAttackDamage(30), _RangedAttackDamage(20), _ArmorDamageReduction(5),
_KickOnBallsDamage(11), _PunchOnAssDamage(10), _FingersInEyesDamage(13), _vaulthunterDamage(25)
{
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

void			FragTrap::takeDamage(unsigned int i){
	if (this->_HitPoint > (i - this->_ArmorDamageReduction)){
		this->_HitPoint = this->_HitPoint - (i - this->_ArmorDamageReduction);
		std::cout << "Is it my blood?"<< std::endl;
	}
	else
		std::cout << "You did not hit me, because I`m ninja!" << std::endl;
}

void			FragTrap::getMeleeAttackDamage(std::string const & target){
	if (this->_EnergyPoint > this->_MeleeAttackDamage){
		std::cout << "FR4G-TP [" << std::setw(7) << this->_Name << "] attacks [" << std::setw(10) << target << "] at melee, causing " << this->_MeleeAttackDamage << " points of damage !" << std::endl;
		this->_EnergyPoint -= this->_MeleeAttackDamage;
	}
	else
		std::cout << "I need more energy!" << std::endl;
}

void			FragTrap::getRangedAttackDamage(std::string const & target){
	if (this->_EnergyPoint > this->_RangedAttackDamage){
		std::cout << "FR4G-TP [" << std::setw(7) << this->_Name << "] attacks [" << std::setw(10) << target << "] at range, causing " << this->_RangedAttackDamage << " points of damage !" << std::endl;
		this->_EnergyPoint -= this->_RangedAttackDamage;
	}
	else
		std::cout << "I need more energy!" << std::endl;
}

std::string	FragTrap::getName() const{
	return this->_Name;
}

unsigned int	FragTrap::getHitPoint() const{
	return this->_HitPoint;
}

unsigned int	FragTrap::getMaxHitPoint() const{
	return this->_MaxHitPoint;
}

unsigned int	FragTrap::getEnergyPoint() const{
	return this->_EnergyPoint;
}

unsigned int	FragTrap::getMaxEnergyPoint() const{
	return this->_MaxEnergyPoint;
}

unsigned int	FragTrap::getLevel() const{
	return this->_Level;
}

unsigned int	FragTrap::getMAttackDamage() const{
	return this->_MeleeAttackDamage;
}

unsigned int	FragTrap::getRAttackDamage() const{
	return this->_RangedAttackDamage;
}

unsigned int	FragTrap::getArmorDamageReduction() const{
	return this->_ArmorDamageReduction;
}

void			FragTrap::status() const{
	std::cout << "FR4G-TP\t[" << std::setw(10) << this->_Name << "] " << std::endl;
	std::cout << "Level\t[" << std::setw(10)  << this->_Level << "]" << std::endl;
	std::cout << "HP\t[" << std::setw(9)  << this->_HitPoint << "\%]" << std::endl;
	std::cout << "Energy\t[" << std::setw(9)  << this->_EnergyPoint << "\%]" << std::endl << std::endl;
}

void			FragTrap::beRepaired(unsigned int amount){
	std::cout << "Wow, repairing" << std::endl;
	this->_HitPoint = (this->_HitPoint + amount <= this->_MaxHitPoint) ? this->_HitPoint + amount :	this->_MaxHitPoint;
	this->_EnergyPoint = (this->_EnergyPoint + amount <= this->_MaxEnergyPoint) ? this->_EnergyPoint + amount : this->_MaxHitPoint;
}

void			FragTrap::getKickOnBalls(std::string const & target){
	if (this->_EnergyPoint > this->_KickOnBallsDamage){
		std::cout << "FR4G-TP [" << std::setw(10) << this->_Name << "] kicks on balls [" << std::setw(10) << target << "], causing " << this->_KickOnBallsDamage << " points of damage !" << std::endl;
		this->_EnergyPoint -= this->_KickOnBallsDamage;
	}
	else
		std::cout << "I need more energy!" << std::endl;
}

void			FragTrap::getPunchOnAss(std::string const & target){
	if (this->_EnergyPoint > this->_PunchOnAssDamage){
		std::cout << "FR4G-TP [" << std::setw(10) << this->_Name << "] punchs on ass [" << std::setw(10) << target << "], causing " << this->_PunchOnAssDamage << " points of damage !" << std::endl;
	}
	else
		std::cout << "I need more energy" << std::endl;
}

void			FragTrap::getFingersInEyes(std::string const & target){
	if (this->_EnergyPoint > this->_FingersInEyesDamage){
		std::cout << "FR4G-TP [" << std::setw(10) << this->_Name << "] puts fingers in eyes [" << std::setw(10) << target << "], causing " << this->_FingersInEyesDamage << " points of damage !" << std::endl;
	}
	else
		std::cout << "I need more energy" << std::endl;
}

void			FragTrap::vaulthunter_dot_exe(std::string const & target){
	if (this->_EnergyPoint > this->_vaulthunterDamage){
		typedef void (FragTrap::*method_function_t)(std::string const & str);
		method_function_t 	array[5];
		int					numb;

		this->_EnergyPoint -= this->_vaulthunterDamage;
		array[0] = &FragTrap::getMeleeAttackDamage;
		array[1] = &FragTrap::getRangedAttackDamage;
		array[2] = &FragTrap::getKickOnBalls;
		array[3] = &FragTrap::getPunchOnAss;
		array[4] = &FragTrap::getFingersInEyes;
		srand (time(NULL));
		numb = rand() % 5;
		method_function_t mthd = array[numb];
		if (array[numb])
			(this->*mthd)(target);
	}
	else
		std::cout << "I need more energy" << std::endl;
}

unsigned int			FragTrap::getKickOnBallsValue() const{
	return this->_KickOnBallsDamage;
}

unsigned int			FragTrap::getPunchOnAssValue() const{
	return this->_PunchOnAssDamage;
}

unsigned int			FragTrap::getFingersInEyesvalue() const{
	return this->_FingersInEyesDamage;
}

unsigned int			FragTrap::getvaulthunterValue() const{
	return this->_vaulthunterDamage;
}
