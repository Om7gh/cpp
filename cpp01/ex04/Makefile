# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 20:44:42 by omghazi           #+#    #+#              #
#    Updated: 2024/10/07 20:44:50 by omghazi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	printf '\033[32m[ ✔ ] %s\n\033[0m' "Create sed"

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	printf '\033[0m[ ✔ ] %s\n\033[0m' "$<"

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.SILENT: