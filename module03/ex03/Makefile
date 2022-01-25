NAME = ex03

CC = clang++
# CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow
CFLAGS = -std=c++98 -Wall -Wextra -Werror -Wshadow
RM = rm -rf

SRCS = 	./main.cpp	\
		./ClapTrap.cpp	\
		./ScavTrap.cpp	\
		./FragTrap.cpp	\
		./DiamondTrap.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $^

clean :
	@$(RM) -r $(OBJS)

fclean : clean
	@$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
