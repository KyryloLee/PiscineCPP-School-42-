/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:37:43 by klee              #+#    #+#             */
/*   Updated: 2018/05/30 13:37:45 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim{

public:
	Peon(std::string name);
	Peon(Peon const & obj);
	~Peon();
	Peon& operator = (Peon const & obj);
	void getPolymorphed() const;
};

#endif
