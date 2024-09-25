NAME = phonebook

SRC = phonebook.cpp getter.cpp setter.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	printf '\033[32m[ ✔ ] %s\n\033[0m' "Create phonebook"

%.o : %.cpp Contact.hpp PhoneBook.hpp
	$(CC) $(CFLAGS) -c $< -o $@
	printf '\033[0m[ ✔ ] %s\n\033[0m' "$<"

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.SILENT: