# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/15 17:01:06 by yjung             #+#    #+#              #
#    Updated: 2021/09/19 11:39:41 by yjung            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++
CFLAGS = -std=c++98 -Wall -Werror -Wextra
RM = rm -rf

SRCS = ./megaphone.cpp

all : $(NAME)

$(NAME) :
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean :
	@$(RM) $(NAME)

fclean : clean

re : fclean all

.PHONY: all clean fclean re
