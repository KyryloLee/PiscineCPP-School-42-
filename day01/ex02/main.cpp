/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 14:20:21 by klee              #+#    #+#             */
/*   Updated: 2018/05/16 14:20:23 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int		main(){
	Zombie* 		unit1;
	Zombie*			unit2;
	ZombieEvent		event;
	
	event.setZombieType("rider");
	unit1 = event.newZombie("Pegas");
	unit1->announce();
	delete unit1;
	event.setZombieType("tank");
	unit2 = event.randomChump();
	unit2->announce();
	return 0;
}
