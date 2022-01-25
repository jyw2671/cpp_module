NAME = ex01

CC = clang++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -rf

SRCS = 	./main.cpp	\
		./ClapTrap.cpp	\
		./ScavTrap.cpp

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
