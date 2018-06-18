/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 14:22:05 by klee              #+#    #+#             */
/*   Updated: 2018/05/18 14:22:06 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP 
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB{

	std::string		_name;
	Weapon*			_type;

public:

	HumanB(std::string str);
	void	setWeapon(Weapon &gun);
	void	attack();
	void	setType(std::string str);
};

#endif