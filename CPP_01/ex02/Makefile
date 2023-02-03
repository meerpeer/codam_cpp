# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: merel <merel@student.42.fr>                  +#+                      #
#                                                    +#+                       #
#    Created: 2023/01/30 10:53:40 by merel         #+#    #+#                  #
#    Updated: 2023/02/03 13:54:01 by mevan-de      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #



#=====================================#
#========= General variables =========#
#=====================================#

NAME = brain

SRC_PATH = src
OBJ_PATH = obj

SRCS = main.cpp
OBJS = $(addprefix $(OBJ_PATH)/,$(SRCS:.cpp=.o))

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

#=====================================#
#=============== Rules ===============#
#=====================================#

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_PATH)/%.o: %.cpp
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean, fclean, re, all
