NAME = pipex
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

HEADER_DIR = mandatory/
HEADER_SRCS = pipex.h
HEADER = $(addprefix $(HEADER_DIR), $(HEADER_SRCS))

MPATH_DIR = mandatory/
MPATH_SRCS = pipex.c childs.c error.c free.c
MPATH = $(addprefix $(MPATH_DIR), $(MPATH_SRCS))
M_OBJ = $(MPATH:.c=.o)

HELPER_DIR = helper/
HELPER_SRCS = ft_strdup.c ft_strncmp.c ft_strjoin.c ft_split.c
HELPER = $(addprefix $(HELPER_DIR), $(HELPER_SRCS))
H_OBJ = $(HELPER:.c=.o)

DEFAULT = \033[0m
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m

%.o: %.c $(HEADER) Makefile
	 @${CC} ${FLAGS} -c $< -o $@

$(NAME): $(H_OBJ) $(M_OBJ)
	@$(CC) $(H_OBJ) $(M_OBJ) -o $(NAME)
	@echo -e "$(GREEN) $(NAME) created!$(DEFAULT)"

all: $(NAME)

clean: 
	@$(RM) $(M_OBJ)
	@$(RM) $(H_OBJ)
	@echo -e "$(YELLOW) object files deleted!$(DEFAULT)"

fclean: clean
	@$(RM) $(NAME)
	@echo -e "$(RED)all deleted!$(DEFAULT)"

re: fclean all

.PHONY: all clean fclean re
