/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 16:36:59 by klee              #+#    #+#             */
/*   Updated: 2018/05/14 16:37:03 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int		ask_to_choose(void){
	std::string	str;
	int			numb;	

	numb = -1;
	std::cout << "Wanna more information?(Y/N)" << std::endl;
	getline(std::cin, str);
	if (str == "Y"){
		std::cout << "Please choose index:" << std::endl;
		getline(std::cin, str);
		if (str.length() == 1 && isdigit(str.at(0)) == true)
			numb = atoi(str.c_str());
		return (numb);
	}
	else if (str == "N")
		return (-2);
	return (-1);
}


void	show_menu(void){
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|";
	std::cout << std::endl;
}

void	full_phonebook(void){
	std::cout << "Phonebook is full." << std::endl;
}

void	wrong_index(void){
	std::cout << "Wrong index." << std::endl;
}

int		main(void){
	Contact 		book[8];
	std::string		str;
	int				i;
	int				index;

	i = 0;
	index = 0;
	while (1){
		std::cout << "Please enter command: ";
		getline(std::cin, str);
		if (str == "ADD"){
			i > 7 ? full_phonebook() : book[i].setInfo(); ;
			book[i].empty() == 0 ? i++ : 0; 
		}
		if (str == "SEARCH"){
			show_menu();		
			for(int c = 0; c < i; c++)
				book[c].getInfo(c);
			index = ask_to_choose();
			if (index > -1 && index < i)
				book[index].showInfo();
			else if (index == -2)
				;
			else wrong_index();
		}
		if (str == "EXIT")
			return 0;
		std::cout << std::endl;
	}
	return 0;
}
