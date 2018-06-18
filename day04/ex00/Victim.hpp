/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:36:50 by klee              #+#    #+#             */
/*   Updated: 2018/05/30 13:37:14 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim{

public:
	Victim(std::string name);
	Victim(Victim const & obj);
	~Victim();
	Victim& operator = (Victim const & obj);
	virtual void getPolymorphed() const;
	std::string  getName() const;
    std::string  getTitle() const;

protected:
    std::string _name;
    std::string _title;
};

std::ostream& operator << (std::ostream& stream, Victim const & obj);

#endif
