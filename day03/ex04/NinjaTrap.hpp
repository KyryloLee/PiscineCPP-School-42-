/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 17:45:33 by klee              #+#    #+#             */
/*   Updated: 2018/05/25 17:45:34 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>
# include <string>
# include <iomanip>

class NinjaTrap : public virtual ClapTrap{

public:
	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &obj);
	~NinjaTrap();
	NinjaTrap& operator = (NinjaTrap const &obj);

	void	ninjaShoebox(FragTrap & obj);
	void	ninjaShoebox(ScavTrap & obj);
	void	ninjaShoebox(NinjaTrap & obj);
	void	ninjaShoebox(ClapTrap & obj);

};

#endif
