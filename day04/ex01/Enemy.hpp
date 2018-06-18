/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 11:22:06 by klee              #+#    #+#             */
/*   Updated: 2018/06/05 11:22:07 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy{

protected:
	int			_hp;
	std::string _type;

public:
	Enemy();
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & obj);
	virtual ~Enemy();
	Enemy& operator = (Enemy const & obj);

	std::string const getType() const;
	int getHP() const;

	virtual void TakeDamage(int damage);
};

#endif
