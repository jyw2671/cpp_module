# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/08 04:18:25 by yjung             #+#    #+#              #
#    Updated: 2021/09/19 11:39:53 by yjung            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = clang++
CFLAGS = -std=c++98 -Wall -Werror -Wextra
RM = rm -rf

SRCS_DIR = ./srcs
OBJS_DIR = ./objs
INC_DIR = ./includes

SRCS =	./main.cpp	\
		./phonebook.cpp

OBJS = $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.cpp=.o)))
vpath %.cpp $(SRCS_DIR)

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $^

$(OBJS_DIR) :
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o : %.cpp | $(OBJS_DIR)
	@$(CC) $(CFLAGS) -o $@ -I$(INC_DIR) -c $^

clean :
	@$(RM) $(OBJS_DIR)

fclean : clean
	@$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
