CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -fr
NAME = clap_trap
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJS = $(SRCS:.cpp=.o)
INC = ClapTrap.hpp ScavTrap.hpp

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