# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mevan-de <mevan-de@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/01/06 13:40:26 by mevan-de      #+#    #+#                  #
#    Updated: 2023/01/06 13:42:09 by mevan-de      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


#=====================================#
#========= General variables =========#
#=====================================#

NAME = account

SRCS = Account.cpp, Account.hpp, tests.cpp
OBJS = $(SRCS:%.cpp=%.o)

CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98

#=====================================#
#=============== Rules ===============#
#=====================================#

all: $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $(SRCS)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean, fclean, re, all
