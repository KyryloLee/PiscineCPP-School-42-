/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:07:56 by klee              #+#    #+#             */
/*   Updated: 2018/06/06 12:07:58 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"
# include <iostream>
# include <string>
# include <vector>

class TacticalMarine : public ISpaceMarine{

private:
	std::string _name;
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const & obj);
	~TacticalMarine();
	TacticalMarine& operator= (TacticalMarine const & obj);
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	std::string const getName() const;
};

#endif
