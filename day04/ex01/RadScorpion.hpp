/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 12:09:26 by klee              #+#    #+#             */
/*   Updated: 2018/06/05 12:09:27 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"
# include <iostream>
# include <string>

class RadScorpion : public Enemy{

public:
	RadScorpion();
	RadScorpion(RadScorpion const & obj);
	~RadScorpion();
	RadScorpion& operator = (RadScorpion const & obj);
};

#endif
