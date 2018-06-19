/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 14:05:51 by klee              #+#    #+#             */
/*   Updated: 2018/06/18 14:05:52 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(){
	Bureaucrat * Jonny;
	try{
		Jonny = new Bureaucrat("Jonny", 4);
		std::cout << *Jonny << std::endl;
		Jonny->increment();
		std::cout << *Jonny << std::endl;
	}
	catch (const std::exception & ex){
		std::cout << "Wrong: \"" << ex.what() << "\"" << std::endl;
	}
	return 0;
}
