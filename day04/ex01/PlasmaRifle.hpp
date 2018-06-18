/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 15:39:31 by klee              #+#    #+#             */
/*   Updated: 2018/06/04 15:39:33 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE
# define PLASMARIFLE

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{

public:
	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const & obj);
	~PlasmaRifle();
	PlasmaRifle& operator = (PlasmaRifle const & obj);

	void attack() const;
};

#endif