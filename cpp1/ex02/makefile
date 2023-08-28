CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -fr
NAME = main
SRCS = main.cpp

all:	$(NAME)

$(NAME): $(OBJS)
	@echo "Compiling..."
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "Done!"

clean: 
	@echo "Cleaning object files..."
	@$(RM) $(OBJS)

fclean: clean
	@echo "Cleaning binary file..."
	@$(RM) $(NAME)

re:
	@echo "Rebuilding..."
	@$(MAKE) -s fclean
	@$(MAKE) -s all

.PHONY: all clean fclean re