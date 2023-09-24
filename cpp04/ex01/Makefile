CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -fr
NAME = animal
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp
OBJS = $(SRCS:.cpp=.o)
INC = Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp

all:	$(NAME)

$(NAME): $(OBJS)
	@echo "Compiling..."
	@$(CC) $(CFLAGS) obj/*.o -o $(NAME)
	@echo "Done!"


$(OBJS): $(SRCS)
	@mkdir -p obj
	@$(CC) $(CFLAGS) -c $(SRCS)
	@mv $(OBJS) obj

clean: 
	@echo "Cleaning object files..."
	@$(RM) obj

fclean: clean
	@echo "Cleaning binary file..."
	@$(RM) $(NAME)

re:
	@echo "Rebuilding..."
	@$(MAKE) -s fclean
	@$(MAKE) -s all

.PHONY: clean fclean re all