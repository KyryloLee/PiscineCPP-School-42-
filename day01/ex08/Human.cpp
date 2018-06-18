/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:12:36 by klee              #+#    #+#             */
/*   Updated: 2018/05/21 14:12:37 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"


void		Human::meleeAttack(std::string const & target){
	std::cout << "Wow, method is work!! Target \"" << target << "\" is taken" << std::endl;
	std::cout << "melle Attack" << std::endl << std::endl;
}

void		Human::rangedAttack(std::string const & target){
	std::cout << "Unbeliveble, method is work!! Target \"" << target << "\" is taken" << std::endl;
	std::cout << "ranged Attack" << std::endl << std::endl;
}

void		Human::intimidatingShout(std::string const & target){
	std::cout << "Breathbreaking method is work!! Target \"" << target << "\" is taken" << std::endl;
	std::cout << "intimidation Shout" << std::endl << std::endl;
}

void		Human::action(std::string const & action, std::string const & target){
	std::string name[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	typedef void (Human::*method_function_t)(std::string const & str);
	method_function_t firstMap[3];

	firstMap[0] = &Human::meleeAttack;
	firstMap[1] = &Human::rangedAttack;
	firstMap[2] = &Human::intimidatingShout;
	int i = 0;
	while (i < 3){
		if (name[i] == action)
			(this->*firstMap[i])(target);
		i++;
	}

}