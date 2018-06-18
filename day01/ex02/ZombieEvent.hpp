/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 14:20:03 by klee              #+#    #+#             */
/*   Updated: 2018/05/16 14:20:04 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Zombie.hpp"

class ZombieEvent{

public:

	ZombieEvent();
	~ZombieEvent();
	void	setZombieType(std::string);
	Zombie* newZombie(std::string name);
	Zombie* randomChump();

private:

	std::string		_type;

};

#endif
