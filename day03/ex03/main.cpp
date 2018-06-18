/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 15:11:33 by klee              #+#    #+#             */
/*   Updated: 2018/05/25 15:11:34 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int		main(){
	ScavTrap bot1("Oleg");
	FragTrap bot2("Hulio");
	ClapTrap bot3("Mario");
	NinjaTrap bot4("Snake");
	NinjaTrap bot5("Dragon");

	bot4.ninjaShoebox(bot1);
	bot4.ninjaShoebox(bot2);
	bot4.ninjaShoebox(bot3);
	bot4.ninjaShoebox(bot5);
	
}
