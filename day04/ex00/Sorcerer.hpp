/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:34:45 by klee              #+#    #+#             */
/*   Updated: 2018/05/30 13:34:46 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"
# include <iostream>
# include <string>


class Sorcerer{
    
public:
	Sorcerer();
    Sorcerer(std::string name, std::string title);
    Sorcerer(Sorcerer const & obj);
    ~Sorcerer();
    Sorcerer& operator = (Sorcerer const &obj);

    std::string  getName() const;
    std::string  getTitle() const;

	void polymorph(Victim const & obj) const;

protected:
    std::string _name;
    std::string _title;
};

std::ostream& operator << (std::ostream& stream, Sorcerer const & obj);

#endif
