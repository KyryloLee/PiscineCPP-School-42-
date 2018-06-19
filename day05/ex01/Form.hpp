/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 09:30:02 by klee              #+#    #+#             */
/*   Updated: 2018/06/19 09:30:03 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Form{

public:
	Form(std::string name, int gradeToSigned, int gradeToExecute);
	Form(Form const &obj);
	~Form();
	Form& operator= (Form const &obj);

	class GradeTooHighExeption : public std::exception{
		virtual const char * what() const throw();
	};

	class GradeTooLowException : public std::exception{
		virtual const char * what() const throw();
	};

	const std::string		getName() const;
	int				getGradeToSigned() const;
	int				getGradeToExecute() const;
	bool					getSigned() const;
	void					beSigned(Bureaucrat * obj);

private:
	const std::string		_name;
	bool					_signed;
	const int				_gradeToSigned;
	const int				_gradeToExecute;
};

std::ostream& 		operator<< (std::ostream& stream, const Form & obj);

#endif
