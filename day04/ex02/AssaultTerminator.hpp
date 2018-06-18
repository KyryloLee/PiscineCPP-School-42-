/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:51:00 by klee              #+#    #+#             */
/*   Updated: 2018/06/06 12:51:01 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP


# include "ISpaceMarine.hpp"
# include <iostream>
# include <string>
# include <vector>

class AssaultTerminator : public ISpaceMarine{

private:
	std::string _name;
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const & obj);
	~AssaultTerminator();
	AssaultTerminator& operator= (AssaultTerminator const & obj);
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	std::string getName() const;
};

#endif
