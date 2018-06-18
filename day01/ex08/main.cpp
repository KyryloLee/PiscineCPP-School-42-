/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:13:01 by klee              #+#    #+#             */
/*   Updated: 2018/05/21 14:13:02 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int			main(){
	Human	Adam;

	Adam.action("meleeAttack", "USA");
	Adam.action("rangedAttack", "Russia");
	Adam.action("intimidatingShout", "anybody");
	
	return 0;
}
