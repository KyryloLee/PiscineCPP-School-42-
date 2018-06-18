/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 14:21:40 by klee              #+#    #+#             */
/*   Updated: 2018/05/18 14:21:43 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA{

	std::string		_name;
	Weapon&			_type;

public:
	
	HumanA(std::string name, Weapon& gun);
	void	attack();
	void	setType(std::string str);

};

#endif
