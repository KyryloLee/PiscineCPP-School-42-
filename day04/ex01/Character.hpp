/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 12:51:19 by klee              #+#    #+#             */
/*   Updated: 2018/06/05 12:51:21 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character{

private:
	std::string	_name;
	int			_ap;
	AWeapon*	_weapon;

public:
	Character(std::string const & name);
	Character(Character const & obj);
	~Character();
	Character& operator = (Character const & obj);

	std::string const getName() const;
	int			getAP() const;
	AWeapon*	getWeapon() const;

	void recoverAP();
	void equip(AWeapon* const & obj);
	void attack(Enemy* & obj);
};

std::ostream& operator << (std::ostream &stream, Character const & obj);

#endif
