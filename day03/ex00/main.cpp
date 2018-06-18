/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:31:09 by klee              #+#    #+#             */
/*   Updated: 2018/05/24 13:31:11 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void){
	FragTrap first("Bob");
	FragTrap vtoroi("Lisa");
	FragTrap copybot(first);

	first.takeDamage(20);
	vtoroi.takeDamage(20);

	first.getMeleeAttackDamage("Moscow");
	vtoroi.getMeleeAttackDamage("Kiyv");
	first.getRangedAttackDamage("Tokyo");
	vtoroi.getRangedAttackDamage("Your ass");
	first.takeDamage(30);
	first.status();
	first.takeDamage(-40);
	first.status();
	first.beRepaired(10);
	first.status();
	first.beRepaired(10);
	first.status();
	vtoroi.getRangedAttackDamage("Your ass");
	vtoroi.getRangedAttackDamage("Your ass");
	vtoroi.getRangedAttackDamage("Your ass");
	vtoroi.getRangedAttackDamage("Your ass");
	vtoroi.status();
	vtoroi.beRepaired(20);
	vtoroi.status();
	vtoroi.beRepaired(20);
	vtoroi.status();
	vtoroi.vaulthunter_dot_exe("your Mama");
	vtoroi.vaulthunter_dot_exe("your Mama");
	vtoroi.vaulthunter_dot_exe("your Mama");
	vtoroi.vaulthunter_dot_exe("your Mama");
	vtoroi.status();
	
	
	return 0;
}
