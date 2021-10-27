# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/19 11:34:23 by yjung             #+#    #+#              #
#    Updated: 2021/09/19 14:01:51 by yjung            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CC = clang++
CFLAGS = -std=c++98 -Wall -Werror -Wextra
RM = rm -rf

INC_DIR = .
SRC_DIR = .
OBJ_DIR = .

INCS =

SRCS = main.cpp

vpath %.cpp $(SRC_DIR)

OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.cpp=.o)))

all : $(NAME)

$(NAME) : $(OBJS) $(INCS)
	@$(CC) $(CFLAGS) -I $(INC_DIR) $(OBJS) -o $@

$(OBJ_DIR) :
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o : %.cpp $(INCS) | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean :
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
