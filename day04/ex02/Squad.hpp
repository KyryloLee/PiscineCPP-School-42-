/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 11:03:11 by klee              #+#    #+#             */
/*   Updated: 2018/06/06 11:03:12 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include <iostream>
# include <string>
# include <vector>

typedef	struct 		s_list{
	ISpaceMarine* 	obj;
	s_list*			next;
}					t_list;

class Squad : public ISquad{

private:
	t_list* _squad_vector;
	std::string	_name;

public:
	Squad();
	Squad(Squad const & obj);
	~Squad();
	Squad& operator= (Squad const & obj);
	int getCount() const;
	ISpaceMarine* getUnit(int n) const;
	int	push(ISpaceMarine* const & obj);
	std::string getName() const;
};

#endif
