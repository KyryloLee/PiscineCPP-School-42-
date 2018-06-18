/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 14:19:05 by klee              #+#    #+#             */
/*   Updated: 2018/05/16 14:19:06 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Zombie{

public:

	Zombie();
	~Zombie();
	void	announce(void);
	void	setName(std::string str);
	void	setType(std::string str);

private:

	std::string _name;
	std::string _type;

};

#endif