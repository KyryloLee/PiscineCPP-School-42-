/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:12:31 by klee              #+#    #+#             */
/*   Updated: 2018/05/24 13:12:32 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &obj);
	~ScavTrap();
	ScavTrap& operator = (ScavTrap const &obj);
	void			challengeNewcomer();
	void			challengeMilk();
	void			challengeTree();
	void			challengeMother();

};

#endif
