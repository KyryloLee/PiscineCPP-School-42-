/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 11:50:56 by klee              #+#    #+#             */
/*   Updated: 2018/05/16 11:50:57 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(){
	Pony			kobyla;
	std::string		str;
	
	kobyla.setName("Ira");
	kobyla.setColor("Black/White");
	kobyla.setGender("Female");
	kobyla.showInfo();
}

void	 ponyOnTheStack(){
	Pony*			gerebets;
	std::string		str;

	gerebets = new Pony();
	gerebets->setName("Ivan");
	gerebets->setColor("Bronze");
	gerebets->setGender("Male");
	gerebets->showInfo();
	delete gerebets;
}

int		main(void){
	std::cout << "Pony on the heap" << std::endl;
	ponyOnTheHeap();
	std::cout << "Pony on the stack" << std::endl;
	ponyOnTheStack();
	return (0);
}
