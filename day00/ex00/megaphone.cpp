/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 10:04:28 by klee              #+#    #+#             */
/*   Updated: 2018/06/18 10:04:29 by klee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(int argc, char **argv)
{
    if (argc > 1){
        for (int i = 1; i < argc; i++){
			for (int c = 0; argv[i][c]; c++){
				std::cout << (char)toupper(argv[i][c]);
			}
		}
		std::cout << std::endl;
    }
    else{
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return (0);
}
