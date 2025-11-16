# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/08 18:42:34 by olarseni          #+#    #+#              #
#    Updated: 2025/11/16 14:44:13 by olarseni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==============================================================================#
#									VARIABLES								   #
#==============================================================================#

NAME	=	Harl_2.0

VPATH	=	./
SRCS	=	main.cpp	\
			Fixed.cpp

OBJS	=	$(SRCS:%.cpp=%.o)

CC		=	c++
CFLAGS	=	-Wall -Werror -Wextra -std=c++98 -g3
IFLAGS	=	-I.

#==============================================================================#
#									RULES									   #
#==============================================================================#

%.o: %.cpp
	@$(CC) $(CFLAGS) $(IFLAGS) -o $@ -c $<
	@printf "\033[2K\rCompiling $@"

all: $(NAME)

$(NAME): $(OBJS)
	@printf "\033[2K\rCompiling $(NAME)\n"
	@$(CC) $(CFLAGS) $(IFLAGS) -o $@ $^
	@$(clean)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
