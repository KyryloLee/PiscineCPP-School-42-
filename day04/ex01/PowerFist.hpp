/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 11:05:36 by klee              #+#    #+#             */
/*   Updated: 2018/06/05 11:05:37 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon{

public:
    PowerFist();
    PowerFist(PowerFist const & obj);
    ~PowerFist();
    PowerFist& operator = (PowerFist const & obj);

    void attack() const;
};

#endif
