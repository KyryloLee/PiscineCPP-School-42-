/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 11:41:47 by klee              #+#    #+#             */
/*   Updated: 2018/06/05 11:41:48 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"
# include <string>
# include <iostream>

class SuperMutant : public Enemy{
	
public:	
	SuperMutant();
	SuperMutant(SuperMutant const & obj);
	~SuperMutant();
	SuperMutant& operator = (SuperMutant const & obj);

	void TakeDamage(int damage);

};

#endif
