CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -fr
NAME = fixedPoint
SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)

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

re:
	@echo "Rebuilding..."
	@$(MAKE) -s fclean
	@$(MAKE) -s all

.PHONY: clean fclean re