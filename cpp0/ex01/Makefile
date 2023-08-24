CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -fr
NAME = phonebook
SRCS = main.cpp

all:	$(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re