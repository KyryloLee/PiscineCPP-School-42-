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

int		main(){
	ScavTrap bot1("Oleg");
	FragTrap bot2("Hulio");

	bot1.challengeNewcomer();
	bot2.vaulthunter_dot_exe("you");
	bot1.challengeNewcomer();
	bot2.vaulthunter_dot_exe("you");
	bot1.challengeNewcomer();
	bot2.vaulthunter_dot_exe("you");
	bot1.status();
	bot2.status();
}
