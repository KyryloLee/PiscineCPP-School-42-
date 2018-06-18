/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:12:31 by klee              #+#    #+#             */
/*   Updated: 2018/05/24 13:12:32 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{

public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &obj);
	~FragTrap();
	FragTrap& operator = (FragTrap const &obj);
	void			vaulthunter_dot_exe(std::string const & target);
	unsigned int	getvaulthunterValue() const;

protected:
	
	unsigned int	_vaulthunterDamage;

};

#endif
