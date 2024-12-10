# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/06 15:23:52 by omghazi           #+#    #+#              #
#    Updated: 2024/12/06 15:25:03 by omghazi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = Bureaucrat
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp max.hpp min.hpp swap.hpp
	c++ $(CPPFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re :	fclean all