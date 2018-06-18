/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:27:27 by klee              #+#    #+#             */
/*   Updated: 2018/05/22 14:27:28 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed{

private:

	int					_fixed;
	static const int	_fract = 8;

public:

	Fixed();
	~Fixed();
	Fixed(Fixed const & obj);	
	void 	operator = (Fixed const & obj);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

};


#endif
