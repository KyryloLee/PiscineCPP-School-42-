# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klee <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/11 16:00:07 by klee              #+#    #+#              #
#    Updated: 2018/05/14 11:32:18 by klee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of program.
NAME = SedIsForLosers

# Compaling with flags.
CC = clang++
FLAGS = -Wall -Wextra -Werror

# Source files.
SRC = main.cpp

# Object files.
OBJ = $(SRC:.cpp=.o)

# Header file
INCL = Contact.class.hpp

# Make project.
all: $(NAME)

# Compile all needed files.
$(NAME): $(OBJ)
	$(CC) $(FLAGS) -c $(SRC)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

# Check modifications.
$(OBJ): $(SRC)
	$(CC) $(FLAGS) -c $<

# Remove all object files.
clean:
	rm -f $(OBJ)

# Remove created project files.
fclean:
	rm -f $(NAME)

# Re-make project.
re: fclean all
