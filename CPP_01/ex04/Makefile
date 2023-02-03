# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: merel <merel@student.42.fr>                  +#+                      #
#                                                    +#+                       #
#    Created: 2023/01/30 10:53:40 by merel         #+#    #+#                  #
#    Updated: 2023/02/03 16:12:14 by mevan-de      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #



#=====================================#
#========= General variables =========#
#=====================================#

NAME = sed

SRC_PATH = src
OBJ_PATH = obj

SRCS = $(shell find $(SRC_PATH) -type f -name '*.cpp')
OBJS = $(addprefix $(OBJ_PATH)/,$(SRCS:.cpp=.o))

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

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
