/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 14:42:53 by klee              #+#    #+#             */
/*   Updated: 2018/06/19 14:42:55 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <fstream>

# define SIGN 145
# define EXEC 137

class RobotomyRequestForm : public Form{

public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & obj);
	~RobotomyRequestForm();
	RobotomyRequestForm operator= (RobotomyRequestForm const & obj);
	
	void				createAFile();
	std::string			getTarget() const;

private:
	std::string		_target;
};

#endif
