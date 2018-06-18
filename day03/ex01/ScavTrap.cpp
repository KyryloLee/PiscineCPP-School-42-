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

ScavTrap::ScavTrap(std::string name) : _Name(name), _Level(1), _HitPoint(100), _MaxHitPoint(100),
_MaxEnergyPoint(50), _EnergyPoint(50), _MeleeAttackDamage(20), _RangedAttackDamage(15), _ArmorDamageReduction(3),
_KickOnBallsDamage(11), _PunchOnAssDamage(10), _FingersInEyesDamage(13){
	std::cout << "I`m not a FR4G-TP, I am individuality" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj){
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

void			ScavTrap::takeDamage(unsigned int i){
	if (this->_HitPoint > (i - this->_ArmorDamageReduction)){
		this->_HitPoint = this->_HitPoint - (i - this->_ArmorDamageReduction);
		std::cout << "Ouch, f**** b***" << std::endl;
	}
	else
		std::cout << "Ha-Ha, you miss" << std::endl;
}

void			ScavTrap::getMeleeAttackDamage(std::string const & target){
	if (this->_EnergyPoint > this->_MeleeAttackDamage){
		std::cout << "SC4V-TP [" << std::setw(7) << this->_Name << "] attacks [" << std::setw(10) << target << "] at melee, causing " << this->_MeleeAttackDamage << " points of damage !" << std::endl;
		this->_EnergyPoint -= this->_MeleeAttackDamage;
	}
	else
		std::cout << "I need more energy!" << std::endl;
}

void			ScavTrap::getRangedAttackDamage(std::string const & target){
	if (this->_EnergyPoint > this->_RangedAttackDamage){
		std::cout << "SC4V-TP [" << std::setw(7) << this->_Name << "] attacks [" << std::setw(10) << target << "] at range, causing " << this->_RangedAttackDamage << " points of damage !" << std::endl;
		this->_EnergyPoint -= this->_RangedAttackDamage;
	}
	else
		std::cout << "I need more energy!" << std::endl;
}

std::string	ScavTrap::getName() const{
	return this->_Name;
}

unsigned int	ScavTrap::getHitPoint() const{
	return this->_HitPoint;
}

unsigned int	ScavTrap::getMaxHitPoint() const{
	return this->_MaxHitPoint;
}

unsigned int	ScavTrap::getEnergyPoint() const{
	return this->_EnergyPoint;
}

unsigned int	ScavTrap::getMaxEnergyPoint() const{
	return this->_MaxEnergyPoint;
}

unsigned int	ScavTrap::getLevel() const{
	return this->_Level;
}

unsigned int	ScavTrap::getMAttackDamage() const{
	return this->_MeleeAttackDamage;
}

unsigned int	ScavTrap::getRAttackDamage() const{
	return this->_RangedAttackDamage;
}

unsigned int	ScavTrap::getArmorDamageReduction() const{
	return this->_ArmorDamageReduction;
}

void			ScavTrap::status() const{
	std::cout << "SC4V-TP\t[" << std::setw(10) << this->_Name << "] " << std::endl;
	std::cout << "Level\t[" << std::setw(10)  << this->_Level << "]" << std::endl;
	std::cout << "HP\t[" << std::setw(9)  << this->_HitPoint << "\%]" << std::endl;
	std::cout << "Energy\t[" << std::setw(9)  << this->_EnergyPoint << "\%]" << std::endl << std::endl;
}

void			ScavTrap::beRepaired(unsigned int amount){
	std::cout << "Wow, repairing" << std::endl;
	this->_HitPoint = (this->_HitPoint + amount <= this->_MaxHitPoint) ? this->_HitPoint + amount :	this->_MaxHitPoint;
	this->_EnergyPoint = (this->_EnergyPoint + amount <= this->_MaxEnergyPoint) ? this->_EnergyPoint + amount : this->_MaxHitPoint;
}

void			ScavTrap::getKickOnBalls(std::string const & target){
	if (this->_EnergyPoint > this->_KickOnBallsDamage){
		std::cout << "SC4V-TP [" << std::setw(10) << this->_Name << "] kicks on balls [" << std::setw(10) << target << "], causing " << this->_KickOnBallsDamage << " points of damage !" << std::endl;
		this->_EnergyPoint -= this->_KickOnBallsDamage;
	}
	else
		std::cout << "I need more energy!" << std::endl;
}

void			ScavTrap::getPunchOnAss(std::string const & target){
	if (this->_EnergyPoint > this->_PunchOnAssDamage){
		std::cout << "SC4V-TP [" << std::setw(10) << this->_Name << "] punchs on ass [" << std::setw(10) << target << "], causing " << this->_PunchOnAssDamage << " points of damage !" << std::endl;
	}
	else
		std::cout << "I need more energy" << std::endl;
}

void			ScavTrap::getFingersInEyes(std::string const & target){
	if (this->_EnergyPoint > this->_FingersInEyesDamage){
		std::cout << "SC4V-TP [" << std::setw(10) << this->_Name << "] puts fingers in eyes [" << std::setw(10) << target << "], causing " << this->_FingersInEyesDamage << " points of damage !" << std::endl;
	}
	else
		std::cout << "I need more energy" << std::endl;
}

unsigned int			ScavTrap::getKickOnBallsValue() const{
	return this->_KickOnBallsDamage;
}

unsigned int			ScavTrap::getPunchOnAssValue() const{
	return this->_PunchOnAssDamage;
}

unsigned int			ScavTrap::getFingersInEyesvalue() const{
	return this->_FingersInEyesDamage;
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
