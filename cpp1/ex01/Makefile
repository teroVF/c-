CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g
RM = rm -fr
NAME = brainz
SRCS = main.cpp Zombie.cpp zombieHorde.cpp
OBJS = $(SRCS:.cpp=.o)
INC = Zombie.hpp

all:	$(NAME)

$(NAME): $(OBJS)
	@echo "Compiling..."
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Done!"


$(OBJS): $(SRCS)
	@$(CC) $(CFLAGS) -c $(SRCS)

clean: 
	@echo "Cleaning object files..."
	@$(RM) $(OBJS)

fclean: clean
	@echo "Cleaning binary file..."
	@$(RM) $(NAME)
	@echo "All clean!"

re:
	@echo "Rebuilding..."
	@$(MAKE) -s fclean
	@$(MAKE) -s all

.PHONY: all clean fclean re