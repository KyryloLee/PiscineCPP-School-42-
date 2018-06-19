/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 14:05:33 by klee              #+#    #+#             */
/*   Updated: 2018/06/18 14:05:34 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
class Bureaucrat{
	
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & obj);
	~Bureaucrat();
	Bureaucrat& operator= (Bureaucrat const & obj);

	std::string			getName() const;
	int					getGrade() const;
	void				increment();
	void				decrement();

private:
	std::string 		_name;
	int					_grade;

	class				GradeTooHighException : public std::exception{
		virtual const char* what() const throw();
	};
	class				GradeTooLowException : public std::exception{
		virtual const char* what() const throw();
	};

};

std::ostream& operator<< (std::ostream& stream, Bureaucrat const &obj);

#endif
