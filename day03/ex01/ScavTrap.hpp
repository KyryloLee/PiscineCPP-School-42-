/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:12:31 by klee              #+#    #+#             */
/*   Updated: 2018/05/24 13:12:32 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <iomanip>

class ScavTrap{

public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &obj);
	~ScavTrap();
	ScavTrap& operator = (ScavTrap const &obj);
	unsigned int	getHitPoint() const;
	unsigned int	getMaxHitPoint() const;
	unsigned int	getEnergyPoint() const;
	unsigned int	getMaxEnergyPoint() const;
	unsigned int	getLevel() const;
	std::string		getName() const;
	unsigned int	getMAttackDamage() const;
	unsigned int	getRAttackDamage() const;
	unsigned int	getArmorDamageReduction() const;
	void			getMeleeAttackDamage(std::string const & target);
	void			getRangedAttackDamage(std::string const & target);
	void			takeDamage(unsigned int damage);
	void			status() const;
	void			beRepaired(unsigned int amount);
	void			getKickOnBalls(std::string const & target);
	void			getPunchOnAss(std::string const &  target);
	void			getFingersInEyes(std::string const & target);
	void			vaulthunter_dot_exe(std::string const & target);
	unsigned int	getKickOnBallsValue() const;
	unsigned int	getPunchOnAssValue() const;
	unsigned int	getFingersInEyesvalue() const;
	void			challengeNewcomer();
	void			challengeMilk();
	void			challengeTree();
	void			challengeMother();
	
private:
	
	unsigned int	_HitPoint;
	unsigned int	_MaxHitPoint;
	unsigned int	_EnergyPoint;
	unsigned int	_MaxEnergyPoint;
	unsigned int	_Level;
	std::string		_Name;
	unsigned int	_MeleeAttackDamage;
	unsigned int	_RangedAttackDamage;
	unsigned int	_ArmorDamageReduction;
	unsigned int	_KickOnBallsDamage;
	unsigned int	_PunchOnAssDamage;
	unsigned int	_FingersInEyesDamage;
	unsigned int	_vaulthunterDamage;

};

#endif
