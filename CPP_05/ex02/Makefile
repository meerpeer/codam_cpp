#=====================================#
#========= General variables =========#
#=====================================#

NAME = Forms

OBJ_PATH = obj

SRCS = main.cpp Bureaucrat.cpp AForm.cpp\
		PresidentialPardonForm.cpp\
		#RobotomyRequestForm.cpp\
		ShrubberyCreationForm.cpp
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