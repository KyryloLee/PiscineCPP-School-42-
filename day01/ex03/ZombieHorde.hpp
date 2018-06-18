/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 10:36:27 by klee              #+#    #+#             */
/*   Updated: 2018/05/17 10:36:29 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP 
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde{

	Zombie*	_horde;

public:

	ZombieHorde(int i);
	~ZombieHorde();

};

#endif