/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:21:43 by klee              #+#    #+#             */
/*   Updated: 2018/05/30 10:21:44 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class   SuperTrap : public NinjaTrap, public FragTrap{
    
public:
    SuperTrap(std::string name);
    SuperTrap(SuperTrap const & obj);
    ~SuperTrap();
    SuperTrap& operator = (SuperTrap const &obj);

};


#endif
