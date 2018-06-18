/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 10:10:11 by klee              #+#    #+#             */
/*   Updated: 2018/05/19 10:10:24 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int			compare_strings(char c, std::string s1, std::string &tmp, std::ifstream &ifs){
	tmp += c;
	for (int i = 1; s1[i]; i++){
		ifs.get(c);
		tmp += c;
		if (c != s1[i])
			return false;
	}
	return true;
}

void		write_in_file(std::string filename, std::string s1, std::string s2, std::ifstream &ifs){
	std::string		tmp;
	char			c;

	std::ofstream ofs(filename + ".replace");
	while (ifs.get(c)){
		if (c != s1[0])
			ofs << c;
		else{
			if (compare_strings(c, s1, tmp, ifs) == true)
				ofs << s2;
			else
				ofs << tmp;
			tmp.clear();
		}
	}
	ofs.close();
}

void		read_input(std::string &filename, std::string &s1, std::string &s2){
	std::cout << "Please input filename: ";
	getline(std::cin, filename);
	std::cout << std::endl;
	std::cout << "Please input s1: ";
	getline(std::cin, s1);
	std::cout << std::endl;
	std::cout << "Please input s2: ";
	getline(std::cin, s2);
	std::cout << std::endl;
}

int			main(){
	std::string	s1;
	std::string	s2;
	std::string	filename;
	
	read_input(filename, s1, s2);
	std::ifstream	ifs(filename);
	if (!ifs.is_open()){
		std::cout << "Wrong input name of file" << std::endl;
		return 0;
	}
	write_in_file(filename, s1, s2, ifs);
	ifs.close();
	return 0;
}
