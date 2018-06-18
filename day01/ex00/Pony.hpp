/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 11:50:39 by klee              #+#    #+#             */
/*   Updated: 2018/05/16 11:50:41 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Pony{
public:

	Pony(void);
	~Pony(void);

	void	setName(std::string str);
	void	setColor(std::string str);
	void	setGender(std::string str);

	void	showInfo();

private:

	std::string		name;
	std::string		color;
	std::string		gender;

};

#endif
