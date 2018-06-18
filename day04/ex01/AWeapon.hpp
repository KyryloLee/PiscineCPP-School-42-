/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 14:57:02 by klee              #+#    #+#             */
/*   Updated: 2018/06/04 14:57:05 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWeapon_HPP
# define AWeapon_HPP

# include <string>
# include <ostream>

class AWeapon
{
protected:
	std::string _name;
	int			_apcost;
	int			_damage;

public:

	AWeapon(void);
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & obj);
	virtual ~AWeapon();

	AWeapon& operator = (AWeapon const &obj);

	std::string const getName() const;
	int getAPCost() const;
	int getDamage() const;
	
	virtual void attack() const = 0;
};

#endif