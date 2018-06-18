/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 16:28:49 by klee              #+#    #+#             */
/*   Updated: 2018/05/25 16:28:51 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <iomanip>

class ClapTrap{
	
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &obj);
	~ClapTrap();
	ClapTrap& operator = (ClapTrap const &obj);
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

protected:
	
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

};

#endif
