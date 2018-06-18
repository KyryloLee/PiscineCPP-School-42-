/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 16:28:39 by klee              #+#    #+#             */
/*   Updated: 2018/05/25 16:28:42 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _Name(name), _Level(1), _MaxHitPoint(100),
_MaxEnergyPoint(100), _EnergyPoint(100), _MeleeAttackDamage(30), _RangedAttackDamage(20), _ArmorDamageReduction(5),
_KickOnBallsDamage(11), _PunchOnAssDamage(10), _FingersInEyesDamage(13){
	return ;
}

ClapTrap::ClapTrap(void){
}

ClapTrap::ClapTrap(ClapTrap const &obj){
	*this = obj;
}

ClapTrap::~ClapTrap(){
}

ClapTrap& ClapTrap::operator = (ClapTrap const &obj){
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

void			ClapTrap::takeDamage(unsigned int i){
	if (this->_HitPoint > (i - this->_ArmorDamageReduction)){
		this->_HitPoint = this->_HitPoint - (i - this->_ArmorDamageReduction);
		std::cout << "Is it my blood?"<< std::endl;
	}
	else
		std::cout << "You did not hit me!" << std::endl;
}

void			ClapTrap::getMeleeAttackDamage(std::string const & target){
	if (this->_EnergyPoint > this->_MeleeAttackDamage){
		std::cout << "[" << std::setw(7) << this->_Name << "] attacks [" << std::setw(10) << target << "] at melee, causing " << this->_MeleeAttackDamage << " points of damage !" << std::endl;
		this->_EnergyPoint -= this->_MeleeAttackDamage;
	}
	else
		std::cout << "I need more energy!" << std::endl;
}

void			ClapTrap::getRangedAttackDamage(std::string const & target){
	if (this->_EnergyPoint > this->_RangedAttackDamage){
		std::cout << "[" << std::setw(7) << this->_Name << "] attacks [" << std::setw(10) << target << "] at range, causing " << this->_RangedAttackDamage << " points of damage !" << std::endl;
		this->_EnergyPoint -= this->_RangedAttackDamage;
	}
	else
		std::cout << "I need more energy!" << std::endl;
}

std::string	ClapTrap::getName() const{
	return this->_Name;
}

unsigned int	ClapTrap::getHitPoint() const{
	return this->_HitPoint;
}

unsigned int	ClapTrap::getMaxHitPoint() const{
	return this->_MaxHitPoint;
}

unsigned int	ClapTrap::getEnergyPoint() const{
	return this->_EnergyPoint;
}

unsigned int	ClapTrap::getMaxEnergyPoint() const{
	return this->_MaxEnergyPoint;
}

unsigned int	ClapTrap::getLevel() const{
	return this->_Level;
}

unsigned int	ClapTrap::getMAttackDamage() const{
	return this->_MeleeAttackDamage;
}

unsigned int	ClapTrap::getRAttackDamage() const{
	return this->_RangedAttackDamage;
}

unsigned int	ClapTrap::getArmorDamageReduction() const{
	return this->_ArmorDamageReduction;
}

void			ClapTrap::status() const{
	std::cout << "Name\t[" << std::setw(10) << this->_Name << "] " << std::endl;
	std::cout << "Level\t[" << std::setw(10)  << this->_Level << "]" << std::endl;
	std::cout << "HP\t[" << std::setw(9)  << this->_HitPoint << "\%]" << std::endl;
	std::cout << "Energy\t[" << std::setw(9)  << this->_EnergyPoint << "\%]" << std::endl << std::endl;
}

void			ClapTrap::beRepaired(unsigned int amount){
	std::cout << "Wow, repairing" << std::endl;
	this->_HitPoint = (this->_HitPoint + amount <= this->_MaxHitPoint) ? this->_HitPoint + amount :	this->_MaxHitPoint;
	this->_EnergyPoint = (this->_EnergyPoint + amount <= this->_MaxEnergyPoint) ? this->_EnergyPoint + amount : this->_MaxHitPoint;
}

void			ClapTrap::getKickOnBalls(std::string const & target){
	if (this->_EnergyPoint > this->_KickOnBallsDamage){
		std::cout << "[" << std::setw(10) << this->_Name << "] kicks on balls [" << std::setw(10) << target << "], causing " << this->_KickOnBallsDamage << " points of damage !" << std::endl;
		this->_EnergyPoint -= this->_KickOnBallsDamage;
	}
	else
		std::cout << "I need more energy!" << std::endl;
}

void			ClapTrap::getPunchOnAss(std::string const & target){
	if (this->_EnergyPoint > this->_PunchOnAssDamage){
		std::cout << "[" << std::setw(10) << this->_Name << "] punchs on ass [" << std::setw(10) << target << "], causing " << this->_PunchOnAssDamage << " points of damage !" << std::endl;
	}
	else
		std::cout << "I need more energy" << std::endl;
}

void			ClapTrap::getFingersInEyes(std::string const & target){
	if (this->_EnergyPoint > this->_FingersInEyesDamage){
		std::cout << "[" << std::setw(10) << this->_Name << "] puts fingers in eyes [" << std::setw(10) << target << "], causing " << this->_FingersInEyesDamage << " points of damage !" << std::endl;
	}
	else
		std::cout << "I need more energy" << std::endl;
}


unsigned int			ClapTrap::getKickOnBallsValue() const{
	return this->_KickOnBallsDamage;
}

unsigned int			ClapTrap::getPunchOnAssValue() const{
	return this->_PunchOnAssDamage;
}

unsigned int			ClapTrap::getFingersInEyesvalue() const{
	return this->_FingersInEyesDamage;
}
