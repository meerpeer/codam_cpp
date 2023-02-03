# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: merel <merel@student.42.fr>                  +#+                      #
#                                                    +#+                       #
#    Created: 2023/01/06 13:40:26 by mevan-de      #+#    #+#                  #
#    Updated: 2023/02/03 16:11:35 by mevan-de      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


#=====================================#
#========= General variables =========#
#=====================================#

NAME = zombie

SRC_PATH = src
OBJ_PATH = obj

SRCS = $(shell find $(SRC_PATH) -type f -name '*.cpp')
OBJS = $(addprefix $(OBJ_PATH)/,$(SRCS:.cpp=.o))
INCLUDE = ./include

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

#=====================================#
#=============== Rules ===============#
#=====================================#

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -I $(INCLUDE) -o $(NAME)

$(OBJ_PATH)/%.o: %.cpp $(INCLUDE)
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ -c -I $(INCLUDE) $<

clean:
	rm -f $(OBJS)
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean, fclean, re, all
