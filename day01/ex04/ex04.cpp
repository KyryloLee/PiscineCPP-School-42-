/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 11:28:28 by klee              #+#    #+#             */
/*   Updated: 2018/05/17 11:28:52 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int			main(){
	std::string		str1;
	std::string		*point;
	std::string		&reference  = str1;
	
	str1 = "HI THIS IS BRAIN";
	point = &str1;
	std::cout << str1 << std::endl;
	std::cout << *point << std::endl;
	std::cout << reference << std::endl;
	return 0;
}
