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
#include "SuperTrap.hpp"

int		main(){
	ScavTrap bot1("Oleg");
	FragTrap bot2("Hulio");
	ClapTrap bot3("Mario");
	NinjaTrap bot4("Snake");
	SuperTrap bot5("Dragon");

	bot5.ninjaShoebox(bot1);
	bot5.ninjaShoebox(bot2);
	bot5.ninjaShoebox(bot3);
	bot5.ninjaShoebox(bot4);
	bot5.vaulthunter_dot_exe("target");
}
