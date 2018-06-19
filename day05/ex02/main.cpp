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
#include "Form.hpp"

int		main(){
	Bureaucrat * Jonny;
	Form	blank("blank", 50, 3);

	std::cout << blank << std::endl;

	try{
		Jonny = new Bureaucrat("Jonny", 4);
		std::cout << *Jonny << std::endl;
		Jonny->increment();
		std::cout << *Jonny << std::endl;
	}
	catch (const std::exception & ex){
		std::cout << "Wrong: \"" << ex.what() << "\"" << std::endl;
	}

	Jonny->signForm(blank);
	Jonny->decrement();
	Jonny->decrement();
	Jonny->decrement();
	Jonny->signForm(blank);
	std::cout << *Jonny << std::endl;

	try{
		blank.beSigned(Jonny);
		std::cout << blank << std::endl;
	}
	catch (const std::exception & ex){
		std::cout << "Something wrong - " << ex.what() << std::endl;
	}

	return 0;
}
