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

# include <iostream>
# include <cmath>

class Fixed{

private:

	int					_fixedValue;
	static const int	_fract = 8;

public:

	Fixed();
	~Fixed();
	Fixed(Fixed const & obj);	
	Fixed(int number);
	Fixed(float number);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;

	Fixed&	min(Fixed const & obj);
	Fixed&	max(Fixed const & obj);

	static const Fixed& max(Fixed const &obj1, Fixed const &obj2);
	static const Fixed& min(Fixed const &obj1, Fixed const &obj2);

	Fixed& operator = (Fixed const & obj);
	const bool operator < (Fixed const & obj) const;
	const bool operator <= (Fixed const & obj) const;
	const bool operator > (Fixed const & obj) const;
	const bool operator >= (Fixed const & obj) const;
	const bool operator == (Fixed const & obj) const;
	const bool operator != (Fixed const & obj) const;
	Fixed operator + (Fixed const & obj) const;
	Fixed operator - (Fixed const & obj) const;
	Fixed operator * (Fixed const & obj) const;
	Fixed operator / (Fixed const & obj) const;
	Fixed operator ++ (int);
	Fixed& operator ++ ();
	Fixed operator -- (int);
	Fixed& operator -- ();

};

std::ostream&	operator << (std::ostream& stream, Fixed const & obj);


#endif
